//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGPhotoPaintEntity.h>

@class NSString, TGDocumentMediaAttachment;

@interface TGPhotoPaintStickerEntity : TGPhotoPaintEntity
{
    TGDocumentMediaAttachment *_document;
    NSString *_emoji;
    struct CGSize _baseSize;
}

@property(readonly, nonatomic) struct CGSize baseSize; // @synthesize baseSize=_baseSize;
@property(readonly, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(readonly, nonatomic) TGDocumentMediaAttachment *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEmoji:(id)arg1;
- (id)initWithDocument:(id)arg1 baseSize:(struct CGSize)arg2;

@end

