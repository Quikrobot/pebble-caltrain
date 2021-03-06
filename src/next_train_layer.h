#pragma once

#include <pebble.h>
#include "model.h"

typedef Layer NextTrainLayer;

//! Creates a NextTrainLayer at the given position
NextTrainLayer *next_train_layer_create(GRect frame, const char* direction_name);

//! Destroys a NextTrainLayer.
void next_train_layer_destroy(NextTrainLayer *layer);

//! Updates the layer with the given time
void next_train_layer_set_time(NextTrainLayer *layer, TrainTime *time);
