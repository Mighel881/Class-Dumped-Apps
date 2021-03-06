//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface IGUnlockableStickerInfo : FBValueObject <NSCopying, NSCoding>
{
    NSString *_title;
    NSString *_subtitle;
    NSArray *_stickers;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 stickers:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

