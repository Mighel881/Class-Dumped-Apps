//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGQuestionAnswerStickerResponder, IGUserSession;

@interface IGQuestionAnswerStickerSingleResponseSectionController : IGListSectionController
{
    IGQuestionAnswerStickerResponder *_item;
    IGUserSession *_userSession;
    _Bool _footerHidden;
    _Bool _borderAlwaysHidden;
}

- (void).cxx_destruct;
- (void)didDeselectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 footerHidden:(_Bool)arg2 borderAlwaysHidden:(_Bool)arg3;

@end

