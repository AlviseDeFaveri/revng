#pragma once

//
// This file is distributed under the MIT License. See LICENSE.md for details.
//

/// \brief Type of generated message for debugging exceptions at runtime when
///        function isolation is applied
typedef enum {
  /// Unexpected control flow at the end of a translated basic block
  StandardTranslatedBlock,
  /// Unexpected control flow at the end of a non-translated basic block (anypc
  /// or unexpectedpc)
  StandardNonTranslatedBlock,
  /// Expected and actual return address after function call not matching
  BadReturnAddress,
  /// Call to the function dispatcher with a PC not corresponding to any
  /// function entry block
  FunctionDispatcherFallBack,
  /// Execution has reached the return address of a noreturn function call
  ReturnFromNoReturn
} Reason;
