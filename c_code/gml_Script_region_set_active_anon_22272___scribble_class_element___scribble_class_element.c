// gml_Script_region_set_active_anon_22272___scribble_class_element___scribble_class_element @ 0x14011b0a0

undefined8 *
gml_Script_region_set_active_anon_22272___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
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
  
  local_40 = "gml_Script_right_to_left@anon@20217@__scribble_class_element@__scribble_class_element"
  ;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  uStack_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x288;
  puVar7 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_38 = 0x28a;
    local_68 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_60 = DAT_1419df7b8;
    uStack_5c = DAT_1419df7bc;
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_68);
  }
  else {
    local_38 = 0x28e;
    if (0 < param_4) {
      puVar7 = (undefined8 *)*param_5;
    }
    cVar3 = FUN_140e491e0(puVar7);
    bVar8 = cVar3 == '\0';
    if (bVar8) {
      local_6c = 10;
      local_78 = 4;
      puVar7 = &local_78;
    }
    else {
      uStack_5c = 10;
      local_68 = 6;
      puVar7 = &local_68;
    }
    uVar2 = uStack_5c;
    uVar1 = local_6c;
    local_58 = *(undefined4 *)puVar7;
    uStack_54 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_50 = *(undefined4 *)(puVar7 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_58);
    if (bVar8) {
      if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
    }
    if ((!bVar8) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_68);
    }
  }
  local_38 = 0x291;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05b38);
  iVar4 = FUN_140e851f0(uVar5,&local_88,DAT_141955260,0);
  if (iVar4 != 0) {
    local_38 = 0x293;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05918);
    uStack_5c = 0xd;
    local_68 = 0x3ff0000000000000;
    if (&local_68 != puVar7) {
      local_58 = 0;
      uStack_54 = 0x3ff00000;
      uStack_50 = uStack_60;
      uStack_4c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_58);
    }
    local_38 = 0x294;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05b38);
    FUN_140e609c0(param_1);
    if (&local_88 != puVar7) {
      local_58 = (undefined4)local_88;
      uStack_54 = local_88._4_4_;
      uStack_50 = uStack_80;
      uStack_4c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_58);
    }
    FUN_140e60910(1);
  }
  local_38 = 0x297;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar5 = FUN_140e5c910();
  FUN_140e42c10(uVar5,param_1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

