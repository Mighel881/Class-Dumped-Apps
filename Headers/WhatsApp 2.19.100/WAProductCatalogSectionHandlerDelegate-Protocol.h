//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, WAProductCatalogSectionHandler, WATableRow, WATableSection;

@protocol WAProductCatalogSectionHandlerDelegate
- (void)productCatalogSectionHandler:(WAProductCatalogSectionHandler *)arg1 didCreateRow:(WATableRow *)arg2 atIndex:(long long)arg3;
- (void)productCatalogSectionHandler:(WAProductCatalogSectionHandler *)arg1 didCreateSection:(WATableSection *)arg2;
- (void)productCatalogSectionHandler:(WAProductCatalogSectionHandler *)arg1 addSection:(WATableSection *)arg2;
- (NSArray *)productCatalogSectionHandlerCurrentSections:(WAProductCatalogSectionHandler *)arg1;
- (double)productCatalogSectionHandlerHeaderWidth:(WAProductCatalogSectionHandler *)arg1;
@end
