#include "hpc/rll/cuda/rl_utils/entry.h"

namespace hpc {
namespace rll {
namespace cuda {

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
    m.def("DistNStepTdForward", &DistNStepTdForward, "dist_nstep_td forward (CUDA)");
    m.def("DistNStepTdBackward", &DistNStepTdBackward, "dist_nstep_td backward (CUDA)");
    m.def("GaeForward", &GaeForward, "gae forward (CUDA)");
    m.def("PPOForward", &PPOForward, "ppo forward (CUDA)");
    m.def("PPOBackward", &PPOBackward, "ppo backward (CUDA)");
    m.def("QNStepTdForward", &QNStepTdForward, "q_nstep_td forward (CUDA)");
    m.def("QNStepTdBackward", &QNStepTdBackward, "q_nstep_td backward (CUDA)");
    m.def("QNStepTdRescaleForward", &QNStepTdRescaleForward, "q_nstep_td_with_rescale forward (CUDA)");
    m.def("QNStepTdRescaleBackward", &QNStepTdRescaleBackward, "q_nstep_td_with_rescale backward (CUDA)");
    m.def("TdLambdaForward", &TdLambdaForward, "td_lambda forward (CUDA)");
    m.def("TdLambdaBackward", &TdLambdaBackward, "td_lambda backward (CUDA)");
    m.def("UpgoForward", &UpgoForward, "upgo forward (CUDA)");
    m.def("UpgoBackward", &UpgoBackward, "upgo backward (CUDA)");
    m.def("VTraceForward", &VTraceForward, "vtrace forward (CUDA)");
    m.def("VTraceBackward", &VTraceBackward, "vtrace backward (CUDA)");
}

}  // namespace cuda
}  // namespace rll
}  // namespace hpc

