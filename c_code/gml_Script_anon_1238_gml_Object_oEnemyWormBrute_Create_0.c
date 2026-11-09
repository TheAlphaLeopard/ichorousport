// gml_Script_anon_1238_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a8dba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1238_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98 [2];
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [12];
  byte local_44;
  undefined8 local_40;
  byte local_34;
  
  local_60 = "gml_Script_anon@1045@gml_Object_oEnemyWormBrute_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x36;
  FUN_140041df0(local_98,param_4,1,param_5);
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x36;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_90;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_58 = 0x36;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f23e8);
    if ((int)local_98[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_90;
    }
    if (puVar2 != puVar4) {
      local_78 = *(undefined4 *)puVar2;
      uStack_74 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_70 = *(undefined4 *)(puVar2 + 1);
      uStack_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_78);
    }
  }
  local_58 = 0x38;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2338);
  local_78 = _DAT_1419eb1e0;
  uStack_74 = uRam00000001419eb1e4;
  uStack_70 = uRam00000001419eb1e8;
  uStack_6c = uRam00000001419eb1ec;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_78);
  local_88 = local_50;
  if (((int)local_98[0] < 1) || (puVar6 = (undefined8 *)*local_90, puVar6 != &local_40)) {
    local_78 = *(undefined4 *)puVar6;
    uStack_74 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_70 = *(undefined4 *)(puVar6 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_40);
    }
    FUN_140041b80(&local_40,&local_78);
  }
  local_80 = &local_40;
  FUN_140e63610(param_1,param_2,&local_a8,2,uVar3,&local_88);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  if (0 < (int)local_98[0]) {
    puVar6 = local_90;
    do {
      puVar2 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

