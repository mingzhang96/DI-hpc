#ifndef HPC_RLL_CUDA_LOSS_H_
#define HPC_RLL_CUDA_LOSS_H_

#include "hpc/rll/cuda/common.h"

namespace hpc {
namespace rll {
namespace cuda {

// gae
void GaeForward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs,
    float gamma,
    float lambda);

// td_lambda
void TdLambdaForward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs,
    float gamma,
    float lambda);

void TdLambdaBackward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs);

// dist_nstep_td
void DistNStepTdForward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs,
    float gamma,
    float v_min,
    float v_max);

void DistNStepTdBackward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs);

// q_nstep_td
void QNStepTdForward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs,
    float gamma);

void QNStepTdBackward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs);

// q_nstep_td_with_rescale
void QNStepTdRescaleForward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs,
    float gamma);

void QNStepTdRescaleBackward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs);

// upgo
void UpgoForward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs);

void UpgoBackward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs);

// vtrace
void VTraceForward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs,
    float gamma,
    float lambda,
    float rho_clip_ratio,
    float c_clip_ratio,
    float rho_pg_clip_ratio);

void VTraceBackward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs);

// ppo
void PPOForward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs,
    bool use_value_clip,
    float clip_ratio,
    float dual_clip);

void PPOBackward(
    const std::vector<torch::Tensor>& inputs,
    std::vector<torch::Tensor>& outputs);

}  // namespace cuda
}  // namespace rll
}  // namespace hpc

#endif // HPC_RLL_CUDA_LOSS_H_
