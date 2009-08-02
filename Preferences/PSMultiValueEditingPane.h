/**
 * This header is generated by class-dump-z 0.1-11q.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSEditingPane.h"

@class UISegmentedControl;

@interface PSMultiValueEditingPane : PSEditingPane {
	UISegmentedControl* _segmentedControl;
}
-(int)selectedIndex;
-(void)selectIndex:(int)index;
-(void)segmentedControl:(id)control selectedSegmentChanged:(int)changed;
@end
