//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGShoppingProductWithContextCardLoggingProviderType-Protocol.h>

@class IGShoppingProductPivotsViewModel;

@protocol IGShoppingProductPivotsCarouselLoggingProviderType <IGShoppingProductWithContextCardLoggingProviderType>
@property(retain, nonatomic) IGShoppingProductPivotsViewModel *pivotsViewModelForProductCells;
- (void)logPivotsDismissForViewModel:(IGShoppingProductPivotsViewModel *)arg1;
- (void)logPivotsTapViewShopForViewModel:(IGShoppingProductPivotsViewModel *)arg1;
- (void)logPivotsImpressionForViewModel:(IGShoppingProductPivotsViewModel *)arg1;
@end

