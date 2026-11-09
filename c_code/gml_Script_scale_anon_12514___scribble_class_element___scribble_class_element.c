// gml_Script_scale_anon_12514___scribble_class_element___scribble_class_element @ 0x140115fe0

undefined8 *
gml_Script_scale_anon_12514___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_origin@anon@11654@__scribble_class_element@__scribble_class_element";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x176;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a051b8);
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  iVar1 = FUN_140e851f0(uVar2,puVar3,DAT_141955260,0);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05368);
    if (param_4 < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)param_5[1];
    }
    iVar1 = FUN_140e851f0(uVar2,puVar3,DAT_141955260,0);
    if (iVar1 == 0) goto LAB_140116240;
  }
  local_48 = 0x178;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04d88);
  uStack_6c = 0xd;
  local_78 = 0x3ff0000000000000;
  if (&local_78 != puVar3) {
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  local_48 = 0x179;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04dd8);
  uStack_6c = 0xd;
  local_78 = 0x3ff0000000000000;
  if (&local_78 != puVar3) {
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  local_48 = 0x17b;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a051b8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  if (puVar4 != puVar3) {
    local_68 = *(undefined4 *)puVar4;
    uStack_64 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_60 = *(undefined4 *)(puVar4 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x17c;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05368);
  FUN_140e609c0(param_1);
  if (1 < param_4) {
    puVar5 = (undefined8 *)param_5[1];
  }
  if (puVar5 != puVar3) {
    local_68 = *(undefined4 *)puVar5;
    uStack_64 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_60 = *(undefined4 *)(puVar5 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  FUN_140e60910(1);
LAB_140116240:
  local_48 = 0x17f;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

