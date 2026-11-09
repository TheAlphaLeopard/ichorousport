// gml_Script_anon_26918_SnowState_SnowState @ 0x14050d970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_26918_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
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
  undefined8 local_60;
  byte local_54;
  uint local_50 [2];
  undefined8 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  
  local_90 = "gml_Script_anon@26510@SnowState@SnowState";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x360;
  FUN_140041df0(local_50,param_4,1,param_5);
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x360;
  puVar5 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_50[0];
  if ((int)local_50[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_48;
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar1 == 0) && (local_88 = 0x360, 0 < (int)local_50[0])) &&
     (puVar3 = (undefined8 *)*local_48, puVar3 != &DAT_1419df7b0)) {
    local_a8 = (undefined4)DAT_1419df7b0;
    uStack_a4 = DAT_1419df7b0._4_4_;
    uStack_a0 = DAT_1419df7b8;
    uStack_9c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_a8);
  }
  local_88 = 0x361;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcb68);
  local_a8 = _DAT_141dd3a98;
  uStack_a4 = uRam0000000141dd3a9c;
  uStack_a0 = uRam0000000141dd3aa0;
  uStack_9c = DAT_141dd3aa4;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_a8);
  local_40 = local_80;
  local_a8 = (undefined4)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_a8);
  local_38 = local_70;
  if (((int)local_50[0] < 1) || (puVar5 = (undefined8 *)*local_48, puVar5 != &local_60)) {
    local_a8 = *(undefined4 *)puVar5;
    uStack_a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_a0 = *(undefined4 *)(puVar5 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_60);
    }
    FUN_140041b80(&local_60,&local_a8);
  }
  local_30 = &local_60;
  FUN_140e63610(param_1,param_2,&local_b8,3,uVar2,&local_40);
  local_88 = 0x362;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
  if (0 < (int)local_50[0]) {
    puVar5 = local_48;
    do {
      puVar3 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

