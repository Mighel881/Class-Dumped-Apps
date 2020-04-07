//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIView;

@interface PSPDFSectionModel : NSObject
{
    unsigned int _isInUpdateBlock:1;
    NSArray *_cells;
    NSString *_headerTitle;
    NSString *_footerTitle;
    UIView *_headerView;
    UIView *_footerView;
    CDUnknownBlockType _updateBlock;
}

+ (id)sectionWithTitle:(id)arg1 cells:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) NSString *footerTitle; // @synthesize footerTitle=_footerTitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (void)updateWithViewController:(id)arg1;
- (id)description;
@property(copy, nonatomic) NSArray *cells; // @synthesize cells=_cells;

@end
