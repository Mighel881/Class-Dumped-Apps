//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSSemVer : NSObject
{
    NSString *_base;
    NSString *_preRelease;
    NSString *_metadata;
}

+ (_Bool)isSemVerFormat:(id)arg1;
+ (id)semVerWithString:(id)arg1;
@property(readonly) NSString *metadata; // @synthesize metadata=_metadata;
@property(readonly) NSString *preRelease; // @synthesize preRelease=_preRelease;
@property(readonly) NSString *base; // @synthesize base=_base;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithString:(id)arg1;

@end

