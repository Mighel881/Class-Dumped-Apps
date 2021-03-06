//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuUUIDStreamItem.h"

@class NSAttributedString, NSNumber, NSString, UIColor, UIFont;
@protocol ASTLinkSelection;

@interface ASTMenuDynamicHeightTextStreamItem : ASTMenuUUIDStreamItem
{
    _Bool _bold;
    _Bool _hasTopShadow;
    int _numberOfLines;
    NSString *_descriptionTitle;
    NSAttributedString *_descriptionAttributedTitle;
    UIFont *_descriptionFont;
    double _descriptionFontSize;
    UIColor *_textColor;
    NSNumber *_topMargin;
    NSNumber *_bottomMargin;
    NSNumber *_leftMargin;
    NSNumber *_rightMargin;
    double _separatorLeftMargin;
    double _separatorRightMargin;
    UIColor *_backgroundColor;
    double _topBorderHeight;
    double _bottomBorderHeight;
    long long _textAlignment;
    long long _lineBreakMode;
    id <ASTLinkSelection> _linkSelectionDelegate;
    double _minimumHeight;
}

@property(readonly, nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) __weak id <ASTLinkSelection> linkSelectionDelegate; // @synthesize linkSelectionDelegate=_linkSelectionDelegate;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) _Bool hasTopShadow; // @synthesize hasTopShadow=_hasTopShadow;
@property(nonatomic, getter=isBold) _Bool bold; // @synthesize bold=_bold;
@property(nonatomic) double bottomBorderHeight; // @synthesize bottomBorderHeight=_bottomBorderHeight;
@property(nonatomic) double topBorderHeight; // @synthesize topBorderHeight=_topBorderHeight;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double separatorRightMargin; // @synthesize separatorRightMargin=_separatorRightMargin;
@property(nonatomic) double separatorLeftMargin; // @synthesize separatorLeftMargin=_separatorLeftMargin;
@property(retain, nonatomic) NSNumber *rightMargin; // @synthesize rightMargin=_rightMargin;
@property(retain, nonatomic) NSNumber *leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) NSNumber *bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(retain, nonatomic) NSNumber *topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double descriptionFontSize; // @synthesize descriptionFontSize=_descriptionFontSize;
@property(retain, nonatomic) UIFont *descriptionFont; // @synthesize descriptionFont=_descriptionFont;
@property(nonatomic) int numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSAttributedString *descriptionAttributedTitle; // @synthesize descriptionAttributedTitle=_descriptionAttributedTitle;
@property(copy, nonatomic) NSString *descriptionTitle; // @synthesize descriptionTitle=_descriptionTitle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

