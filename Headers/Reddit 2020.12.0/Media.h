//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCopying-Protocol.h>

@class AnimatedMedia, NSString, RPANMedia, StillMedia, StreamingMedia, VideoMedia;

@interface Media : NSObject <NSCopying>
{
    NSString *_mediaId;
    StillMedia *_still;
    StillMedia *_obfuscatedStill;
    AnimatedMedia *_animated;
    RPANMedia *_rpan;
    StreamingMedia *_streaming;
    VideoMedia *_video;
    long long _typeHint;
}

@property(nonatomic) long long typeHint; // @synthesize typeHint=_typeHint;
@property(retain, nonatomic) VideoMedia *video; // @synthesize video=_video;
@property(retain, nonatomic) StreamingMedia *streaming; // @synthesize streaming=_streaming;
@property(retain, nonatomic) RPANMedia *rpan; // @synthesize rpan=_rpan;
@property(retain, nonatomic) AnimatedMedia *animated; // @synthesize animated=_animated;
@property(retain, nonatomic) StillMedia *obfuscatedStill; // @synthesize obfuscatedStill=_obfuscatedStill;
@property(retain, nonatomic) StillMedia *still; // @synthesize still=_still;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool hasLargeAssets;
- (void)updateWithGraphQLData:(id)arg1;
- (id)initWithGraphQLData:(id)arg1;

@end

