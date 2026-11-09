// gml_Script_scale_to_box_anon_13049___scribble_class_element___scribble_class_element @ 0x140116780

undefined8 *
gml_Script_scale_to_box_anon_13049___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_scale@anon@12514@__scribble_class_element@__scribble_class_element";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x197;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05348);
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  iVar1 = FUN_140e851f0(uVar2,puVar3,DAT_141955260,0);
  if (iVar1 != 0) {
    local_38 = 0x199;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05918);
    uStack_5c = 0xd;
    local_68 = 0x3ff0000000000000;
    if (&local_68 != puVar3) {
      local_58 = 0;
      uStack_54 = 0x3ff00000;
      uStack_50 = uStack_60;
      uStack_4c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_58);
    }
    local_38 = 0x19a;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04dd8);
    uStack_5c = 0xd;
    local_68 = 0x3ff0000000000000;
    if (&local_68 != puVar3) {
      local_58 = 0;
      uStack_54 = 0x3ff00000;
      uStack_50 = uStack_60;
      uStack_4c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_58);
    }
    local_38 = 0x19c;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05348);
    FUN_140e609c0(param_1);
    if (0 < param_4) {
      puVar4 = (undefined8 *)*param_5;
    }
    if (puVar4 != puVar3) {
      local_58 = *(undefined4 *)puVar4;
      uStack_54 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_50 = *(undefined4 *)(puVar4 + 1);
      uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_58);
    }
    FUN_140e60910(1);
  }
  local_38 = 0x19f;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

