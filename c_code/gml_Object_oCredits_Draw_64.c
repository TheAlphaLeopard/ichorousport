// gml_Object_oCredits_Draw_64 @ 0x1408d2c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oCredits_Draw_64(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar2;
  undefined8 uVar1;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_80 [12];
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  local_90 = "gml_Object_oCredits_Alarm_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_88 = 2;
  uVar1 = CONCAT44(uVar2,DAT_1419fdb68);
  FUN_140e634e0(param_1,param_2,&local_b8,0,uVar1,0);
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_88 = 3;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uStack_3c = 0xf;
  local_48 = 0x100000200000013;
  local_a8 = 0x13;
  uStack_a4 = 0x1000002;
  uStack_a0 = uStack_40;
  uStack_9c = 0xf;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_a8);
  local_38 = local_80;
  local_a8 = _DAT_1419e9b20;
  uStack_a4 = uRam00000001419e9b24;
  uStack_a0 = uRam00000001419e9b28;
  uStack_9c = uRam00000001419e9b2c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_a8);
  local_30 = local_70;
  local_a8 = _DAT_1419df7a0;
  uStack_a4 = uRam00000001419df7a4;
  uStack_a0 = uRam00000001419df7a8;
  uStack_9c = uRam00000001419df7ac;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_a8);
  local_28 = local_60;
  FUN_140e634e0(param_1,param_2,&local_b8,3,CONCAT44(uVar2,DAT_141a0a2e8),&local_38);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

