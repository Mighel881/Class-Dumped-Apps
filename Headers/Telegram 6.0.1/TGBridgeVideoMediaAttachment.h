//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGBridgeMediaAttachment.h>

@interface TGBridgeVideoMediaAttachment : TGBridgeMediaAttachment
{
    _Bool _round;
    int _duration;
    long long _videoId;
    struct CGSize _dimensions;
}

+ (long long)mediaType;
@property(nonatomic) _Bool round; // @synthesize round=_round;
@property(nonatomic) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
