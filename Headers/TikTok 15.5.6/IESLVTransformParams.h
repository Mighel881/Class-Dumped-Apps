//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESLVTransformParams : NSObject
{
    _Bool _filpX;
    _Bool _filpY;
    unsigned long long _fillMode;
    double _scale;
    double _rotateAngle;
    double _translateX;
    double _translateY;
}

@property(nonatomic) _Bool filpY; // @synthesize filpY=_filpY;
@property(nonatomic) _Bool filpX; // @synthesize filpX=_filpX;
@property(nonatomic) double translateY; // @synthesize translateY=_translateY;
@property(nonatomic) double translateX; // @synthesize translateX=_translateX;
@property(nonatomic) double rotateAngle; // @synthesize rotateAngle=_rotateAngle;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
- (id)init;

@end
