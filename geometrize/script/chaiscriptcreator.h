#pragma once

#include <memory>

namespace chaiscript
{
class ChaiScript;
}

namespace geometrize
{

namespace script
{

/**
 * @brief createDefaultEngine Creates a default Chaiscript engine object, with the default bindings (Geometrize-specific utility functions etc).
 * @return The Chaiscript engine object.
 */
std::unique_ptr<chaiscript::ChaiScript> createDefaultEngine();

/**
 * @brief createLaunchWindowEngine Creates a Chaiscript engine object for the launch window.
 * @return The Chaiscript engine object.
 */
std::unique_ptr<chaiscript::ChaiScript> createLaunchWindowEngine();

/**
 * @brief createImageJobEngine Creates a Chaiscript engine for an image job window.
 * @return The Chaiscript engine object.
 */
std::unique_ptr<chaiscript::ChaiScript> createImageJobEngine();

/**
 * @brief createShapeMutatorEngine Creates a Chaiscript engine object for mutating shapes.
 * @return The Chaiscript engine object.
 */
std::unique_ptr<chaiscript::ChaiScript> createShapeMutatorEngine();

}

}
