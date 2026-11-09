// gml_Script_anon_6788_DefineStatus_STATUSINIT @ 0x1405c5a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_6788_DefineStatus_STATUSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@5095@DefineStatus@STATUSINIT";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xf2;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff228);
  uStack_6c = DAT_141dd4684;
  uStack_70 = DAT_141dd4680;
  if ((1 << ((byte)DAT_141dd4684 & 0x1f) & 0x46U) == 0) {
    local_78 = DAT_141dd4678;
  }
  else {
    FUN_1400419b0(&local_78,&DAT_141dd4678);
  }
  iVar1 = FUN_140e851f0(uVar3,&local_78,DAT_141955260,0);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar1 == 0) {
    local_48 = 0xf4;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5838);
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5da8);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5fc8);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
    uStack_6c = *(uint *)((longlong)puVar4 + 0xc);
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
      local_78 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_78,puVar4);
    }
    FUN_1400460e0(&local_78,uVar3);
    if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
      uVar3 = *puVar5;
    }
    else {
      uVar3 = FUN_140e4b060(puVar5);
    }
    if ((uStack_6c & 0xffffff) == 0) {
      uVar8 = (undefined4)local_78;
    }
    else {
      uVar8 = FUN_140e4b060(&local_78);
    }
    uVar3 = FUN_140e78ec0(uVar8,0,uVar3);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = uVar3;
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    local_48 = 0xf5;
    uVar2 = FUN_140e851f0(puVar4,puVar5,DAT_141955260,1);
    if (0x7fffffff < uVar2) {
      DAT_141dc7a50 = (undefined8 *)local_58;
      return param_3;
    }
    local_48 = 0xf6;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f5838);
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f5fc8);
    puVar7 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
    if (puVar7 != &DAT_141dd45a8) {
      local_68 = CONCAT44(uRam0000000141dd45ac,_DAT_141dd45a8);
      uStack_60 = uRam0000000141dd45b0;
      uStack_5c = DAT_141dd45b4;
      if ((1 << ((byte)*(undefined4 *)(puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_68);
    }
    local_48 = 0xf7;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9f8);
    FUN_140e609c0(param_1);
    uStack_5c = 0xf;
    local_68 = 0x1000001000002e7;
    if (&local_68 != puVar4) {
      local_78 = 0x1000001000002e7;
      uStack_70 = uStack_60;
      uStack_6c = 0xf;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_78);
    }
  }
  else {
    local_48 = 0xfc;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5fc8);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
    FUN_140e609c0(param_1);
    uStack_6c = *(uint *)((longlong)puVar4 + 0xc);
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
      local_78 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_78,puVar4);
    }
    uStack_5c = 7;
    local_68 = CONCAT44(local_68._4_4_,1);
    FUN_1400462a0(&local_78,&local_68);
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    if (&local_78 != puVar5) {
      local_68 = local_78;
      uStack_60 = uStack_70;
      uStack_5c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_68);
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

