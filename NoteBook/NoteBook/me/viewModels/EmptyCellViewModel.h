//
//  EmptyCellViewModel.h
//  NoteBook
//
//  Created by Mac on 16/5/4.
//  Copyright © 2016年 dz. All rights reserved.
//

#import "CellViewModel.h"
#import "EmptyCellModel.h"

@interface EmptyCellViewModel : CellViewModel

@property (nonatomic, strong, readonly) EmptyCellModel *model;

@end