// gml_Script_get_right_anon_29120___scribble_class_element___scribble_class_element @ 0x1401219d0

undefined8 *
gml_Script_get_right_anon_29120___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 local_88;
  undefined4 local_80;
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
  
  local_40 = "gml_Script_get_left@anon@28857@__scribble_class_element@__scribble_class_element";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x373;
  FUN_140041df0(local_68,param_4,1,param_5);
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x373;
  puVar5 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_60;
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_38 = 0x373;
    if ((int)local_68[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  local_38 = 0x375;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ff8);
  FUN_140e63610(param_1,param_2,&local_88,0,uVar2,0);
  local_38 = 0x376;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05f58);
  if (0 < (int)local_68[0]) {
    puVar5 = (undefined8 *)*local_60;
  }
  uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_70 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
    local_78 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_78);
  }
  FUN_1400460e0(&local_78,puVar5);
  if (&local_78 != param_3) {
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (0 < (int)local_68[0]) {
    puVar5 = local_60;
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
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

