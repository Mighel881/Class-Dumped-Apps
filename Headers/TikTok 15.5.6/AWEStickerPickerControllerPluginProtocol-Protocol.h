//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEStickerPickerController, IESEffectModel, NSError;

@protocol AWEStickerPickerControllerPluginProtocol <NSObject>

@optional
- (void)controller:(AWEStickerPickerController *)arg1 didSelectNewSticker:(IESEffectModel *)arg2 oldSticker:(IESEffectModel *)arg3;
- (_Bool)controller:(AWEStickerPickerController *)arg1 willHandleSelectSticker:(IESEffectModel *)arg2;
- (void)controller:(AWEStickerPickerController *)arg1 didFailLoadStickerCategoriesWithError:(NSError *)arg2;
- (void)controllerDidFinishLoadStickerCategories:(AWEStickerPickerController *)arg1;
- (void)controllerDidBeginLoadCategories:(AWEStickerPickerController *)arg1;
- (void)controllerViewDidLoad:(AWEStickerPickerController *)arg1;
@end
