// gml_Script_anon_12444_DefineBuffs_OFFERINGSINIT @ 0x1403cdd00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_12444_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 local_48 [12];
  byte local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_90 = "gml_Script_anon@11644@DefineBuffs@OFFERINGSINIT";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x1c3;
  _eh_vector_constructor_iterator_(local_68,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x1c5;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uStack_bc = *(undefined4 *)((longlong)param_5 + 0xc);
  uStack_c0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_cc = 7;
  local_d8 = CONCAT44(local_d8._4_4_,5);
  FUN_140042560(&local_c8,&local_d8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = local_c8;
  uStack_d0 = uStack_c0;
  uStack_cc = uStack_bc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_d8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_78 = local_58;
  local_d8 = CONCAT44(uRam00000001419e4744,_DAT_1419e4740);
  uStack_d0 = uRam00000001419e4748;
  uStack_cc = uRam00000001419e474c;
  if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_48);
  }
  FUN_140041b80(local_48,&local_d8);
  local_70 = local_48;
  ppuVar2 = &local_78;
  puVar1 = (undefined8 *)gml_Script_bm_string_width(param_1,param_2,&local_b8,2,ppuVar2);
  uVar3 = (undefined4)((ulonglong)ppuVar2 >> 0x20);
  if (puVar1 != &local_a8) {
    local_d8 = *puVar1;
    uStack_d0 = *(undefined4 *)(puVar1 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_d8);
  }
  local_88 = 0x1c6;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_80 = &local_a8;
  uStack_cc = DAT_141dd2614;
  uStack_d0 = DAT_141dd2610;
  if ((1 << ((byte)DAT_141dd2614 & 0x1f) & 0x46U) == 0) {
    local_d8 = DAT_141dd2608;
  }
  else {
    FUN_1400419b0(&local_d8,&DAT_141dd2608);
  }
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar3,DAT_1419fcb18),&local_80);
  uStack_bc = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_c8,puVar1);
  }
  FUN_1400460e0(&local_c8,&local_d8);
  if (&local_c8 != param_3) {
    local_38 = (undefined4)local_c8;
    uStack_34 = local_c8._4_4_;
    uStack_30 = uStack_c0;
    uStack_2c = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_38);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

