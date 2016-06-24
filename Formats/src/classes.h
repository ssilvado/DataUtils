#include "DataFormats/Common/interface/Wrapper.h"
#include <vector>
#include <utility>

namespace DataUtils_Formats {

   struct dictionary {

      // CTPPSTools/Filters/interface/DoubleArmFilter.cc
      std::pair<size_t,size_t> dummy0;
      std::vector<std::pair<size_t,size_t> > dummy1;
      edm::Wrapper<std::vector<std::pair<size_t,size_t> > > dummy2;
   };
}
