//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNTwitterMomentMedia : NSObject
{
    NSString *_mediaURLString;
    NSString *_mediaID;
    struct CGSize _mediaDimensions;
}

+ (id)momentMediaWithJSONData:(id)arg1;
@property(readonly, nonatomic) struct CGSize mediaDimensions; // @synthesize mediaDimensions=_mediaDimensions;
@property(readonly, copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(readonly, copy, nonatomic) NSString *mediaURLString; // @synthesize mediaURLString=_mediaURLString;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithMediaID:(id)arg1 URLString:(id)arg2 dimensions:(struct CGSize)arg3;
- (id)init;

@end
