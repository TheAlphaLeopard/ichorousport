// gml_Object_oSalesman_Step_0 @ 0x140d5ca60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSalesman_Step_0(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 *local_40;
  undefined1 *local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_50 = "gml_Object_oSalesman_Alarm_1";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_48 = 4;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
  if (puVar1 != local_a8) {
    local_e8 = *puVar1;
    uStack_e4 = puVar1[1];
    uStack_e0 = puVar1[2];
    uStack_dc = puVar1[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_e8);
  }
  local_40 = local_a8;
  local_e8 = _DAT_141ddb618;
  uStack_e4 = uRam0000000141ddb61c;
  uStack_e0 = uRam0000000141ddb620;
  uStack_dc = DAT_141ddb624;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  local_38 = local_98;
  if (puVar1 != local_88) {
    local_e8 = *puVar1;
    uStack_e4 = puVar1[1];
    uStack_e0 = puVar1[2];
    uStack_dc = puVar1[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_e8);
  }
  local_30 = local_88;
  local_e8 = _DAT_141ddb618;
  uStack_e4 = uRam0000000141ddb61c;
  uStack_e0 = uRam0000000141ddb620;
  uStack_dc = DAT_141ddb624;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_e8);
  local_28 = local_78;
  uVar3 = CONCAT44(uVar4,DAT_1419ff4f8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_c8,2,uVar3,&local_40);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_d8,puVar2);
  }
  uStack_dc = 7;
  local_e8 = 1;
  FUN_1400460e0(&local_d8,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = (undefined4)local_d8;
  uStack_e4 = local_d8._4_4_;
  uStack_e0 = uStack_d0;
  uStack_dc = uStack_cc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_e8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_20 = local_68;
  FUN_140e634e0(param_1,param_2,&local_b8,3,CONCAT44(uVar4,DAT_1419fd648),&local_30);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

