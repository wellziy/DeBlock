//
//  LogLayer.h
//  Deblock
//
//  Created by Maarten Billemont on 15/11/09.
//  Copyright 2009 lhunath (Maarten Billemont). All rights reserved.
//

#import "ShadeLayer.h"


@interface LogLayer : ShadeLayer {

    CCLabelTTF              *_logLabel;
    NSString                *_logString;
}

@end
