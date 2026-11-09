// gml_Object_oSplitAcidRain_Step_0 @ 0x140d9eb30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSplitAcidRain_Step_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar4;
  undefined1 **ppuVar3;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  local_110 = "gml_Object_oSplatExample_Draw_0";
  local_108 = 0;
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  _eh_vector_constructor_iterator_(local_c8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_108 = 2;
  local_128 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_128);
  local_58 = local_c8;
  uStack_11c = DAT_141ddb954;
  uStack_120 = DAT_141ddb950;
  if ((1 << ((byte)DAT_141ddb954 & 0x1f) & 0x46U) == 0) {
    local_128 = DAT_141ddb948;
  }
  else {
    FUN_1400419b0(&local_128,&DAT_141ddb948);
  }
  uVar4 = uStack_11c;
  local_158 = (undefined8 *)local_128;
  uStack_150 = (char *)CONCAT44(uStack_11c,uStack_120);
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_158);
  if ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_50 = local_b8;
  puVar2 = (undefined8 *)
           gml_Script_anon_147_DefineBossAttributes_BOSSMODSINIT
                     (param_1,param_2,&local_100,1,&local_58);
  if (puVar2 != &local_a8) {
    local_158 = (undefined8 *)*puVar2;
    uStack_150 = (char *)puVar2[1];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_158);
  }
  local_48 = &local_a8;
  ppuVar3 = &local_50;
  puVar2 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_f0,2,ppuVar3);
  uVar4 = (undefined4)((ulonglong)ppuVar3 >> 0x20);
  if (puVar2 != &local_98) {
    local_158 = (undefined8 *)*puVar2;
    uStack_150 = (char *)puVar2[1];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_158);
  }
  local_40 = &local_98;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_e0,1,CONCAT44(uVar4,DAT_141a086f8),&local_40);
  if (puVar2 != &local_88) {
    local_158 = (undefined8 *)*puVar2;
    uStack_150 = (char *)puVar2[1];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_158);
  }
  local_158 = (undefined8 *)CONCAT44(uRam00000001419edf14,_DAT_1419edf10);
  uStack_150 = (char *)CONCAT44(uRam00000001419edf1c,uRam00000001419edf18);
  local_38 = &local_88;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_158);
  local_30 = local_78;
  local_158 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_150 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_158);
  local_28 = local_68;
  gml_Script_pal_swap_layer_init(param_1,param_2,&local_138,3,&local_38);
  local_108 = 4;
  FUN_140ec5c30(param_1);
  local_108 = 6;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_130 = 0;
  uStack_150 = "gml_Script_pal_swap_reset";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_12c = 5;
  local_138 = 0;
  local_148 = 0x71;
  iVar1 = FUN_140ec9d80();
  if (iVar1 != -1) {
    local_148 = 0x71;
    FUN_140ec9dc0();
  }
  DAT_141dc7a50 = local_158;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return;
}

