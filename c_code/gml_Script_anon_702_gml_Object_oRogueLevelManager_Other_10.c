// gml_Script_anon_702_gml_Object_oRogueLevelManager_Other_10 @ 0x140cdc2c0

undefined8 *
gml_Script_anon_702_gml_Object_oRogueLevelManager_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@495@gml_Object_oRogueLevelManager_Other_10";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x13;
  FUN_140041df0(local_68,param_4,1,param_5);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x13;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_48 = 0x13;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57260);
    cVar1 = FUN_140e491e0(uVar3);
    if ((int)local_68[0] < 1) {
      plVar7 = &DAT_1419df7b0;
    }
    else {
      plVar7 = (longlong *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    *(undefined4 *)((longlong)plVar7 + 0xc) = 0xd;
    if (cVar1 == '\0') {
      uVar8 = 0x3ff00000;
    }
    else {
      uVar8 = 0;
    }
    *plVar7 = (ulonglong)uVar8 << 0x20;
  }
  local_48 = 0x14;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57260);
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  iVar2 = FUN_140e851f0(uVar3,puVar4,DAT_141955260,0);
  if (iVar2 != 0) {
    uStack_6c = 6;
    local_78 = param_1;
    FUN_140e87440(&local_78,DAT_141a0a7e8,1,&local_88,0,0);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    uStack_6c = 0;
    local_78 = (longlong *)&DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(&local_88,&local_78,DAT_141955260,0);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9a28);
      uStack_6c = 0;
      local_78 = (longlong *)0x0;
      iVar2 = FUN_140e851f0(uVar3,&local_78,DAT_141955260,0);
      if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if (iVar2 == 0) {
        local_48 = 0x16;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f99e8);
        if (puVar4 != &local_98) {
          local_78 = (longlong *)*puVar4;
          uStack_70 = *(undefined4 *)(puVar4 + 1);
          uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_98);
          }
          FUN_140041b80(&local_98,&local_78);
        }
        FUN_140e86fa0(param_1,DAT_141a0a7e8,1,&local_98);
        local_48 = 0x17;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57260);
        FUN_140e609c0(param_1);
        if (0 < (int)local_68[0]) {
          puVar5 = (undefined8 *)*local_60;
        }
        if (puVar5 != puVar4) {
          local_78 = (longlong *)*puVar5;
          uStack_70 = *(undefined4 *)(puVar5 + 1);
          uStack_6c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_78);
        }
        FUN_140e60910(1);
      }
    }
  }
  local_48 = 0x1a;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9a28);
  uStack_6c = 0;
  local_78 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(uVar3,&local_78,DAT_141955260,0);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar2 == 0) {
    local_48 = 0x1b;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a28);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x4024000000000000;
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (0 < (int)local_68[0]) {
    puVar5 = local_60;
    do {
      puVar4 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

