//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEModernFeedVideoCutConfig : NSObject
{
    double _maxHeight;
    double _judgeRatio;
    double _displayRatio;
    double _verticalVideoMaxWidth;
    double _horizontalVideoMaxWidth;
    unsigned long long _videoCutType;
}

@property(nonatomic) unsigned long long videoCutType; // @synthesize videoCutType=_videoCutType;
@property(nonatomic) double horizontalVideoMaxWidth; // @synthesize horizontalVideoMaxWidth=_horizontalVideoMaxWidth;
@property(nonatomic) double verticalVideoMaxWidth; // @synthesize verticalVideoMaxWidth=_verticalVideoMaxWidth;
@property(nonatomic) double displayRatio; // @synthesize displayRatio=_displayRatio;
@property(nonatomic) double judgeRatio; // @synthesize judgeRatio=_judgeRatio;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
- (id)init;

@end
