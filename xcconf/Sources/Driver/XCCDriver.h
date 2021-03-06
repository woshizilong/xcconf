//
//  XCCDriver.h
//  xcconf
//
//  Created by AlexDenisov on 05/02/15.
//  Copyright (c) 2015 AlexDenisov. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XCCDriver : NSObject

- (instancetype)initWithInputPath:(NSString *)inputPath
                       outputPath:(NSString *)outputPath
                configurationName:(NSString *)configurationName;

- (void)generateAndSaveOutputFile;

@end
