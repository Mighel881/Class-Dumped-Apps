//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SrtColor : NSObject
{
    double _alpha;
    double _red;
    double _green;
    double _blue;
}

+ (id)stickerSrtColorWithDic:(id)arg1;
@property(nonatomic) double blue; // @synthesize blue=_blue;
@property(nonatomic) double green; // @synthesize green=_green;
@property(nonatomic) double red; // @synthesize red=_red;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (id)toDicSrtColor;
- (id)init;

@end
