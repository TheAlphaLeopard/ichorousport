// gml_Script____struct___730_anon_3910____struct___725_gml_Object_oRogueLevelManager_Create_0 @ 0x140cb7920

undefined8 *
gml_Script____struct___730_anon_3910____struct___725_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@906@gml_Object_oRogueLevelManager_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x2d;
  FUN_140041df0(local_68,param_4,1,param_5);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de3340) {
    _Init_thread_header(&DAT_141de3340);
    if (DAT_141de3340 == -1) {
      DAT_141de3348 = FUN_140e63aa0(DAT_1419fa058);
      _Init_thread_footer(&DAT_141de3340);
    }
  }
  local_38 = 0x2d;
  puVar3 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_60;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_38 = 0x2d;
    if ((int)local_68[0] < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0;
  }
  FUN_140e643a0(param_1,DAT_141de3348);
  local_38 = 0x2f;
  uStack_6c = 0xf;
  local_78 = 0x10000010000010d;
  local_58 = 0x10d;
  uStack_54 = 0x1000001;
  uStack_50 = uStack_70;
  uStack_4c = 0xf;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_58);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_88);
  local_38 = 0x30;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_98);
  local_38 = 0x31;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_a8);
  local_38 = 0x33;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  FUN_140e609c0(param_1);
  if (0 < (int)local_68[0]) {
    puVar3 = (undefined8 *)*local_60;
  }
  if (puVar3 != puVar2) {
    local_58 = *(undefined4 *)puVar3;
    uStack_54 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_50 = *(undefined4 *)(puVar3 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x35;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a968);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_anon_1722_anon_906_gml_Object_oRogueLevelManager_Create_0,
                param_1);
  if (&local_78 != puVar3) {
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0x41;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a570f0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_anon_906_gml_Object_oRogueLevelManager_Create_0,param_1);
  if (&local_78 != puVar3) {
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0x60;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03228);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,
                gml_Script_anon_3222____struct___725_gml_Object_oRogueLevelManager_Create_0,param_1)
  ;
  if (&local_78 != puVar3) {
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (0 < (int)local_68[0]) {
    puVar3 = local_60;
    do {
      puVar2 = (undefined8 *)*puVar3;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

