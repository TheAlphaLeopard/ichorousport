// gml_Script_character_delay_add_anon_7342___scribble_class_typist___scribble_class_typist @ 0x140166170

undefined8 *
gml_Script_character_delay_add_anon_7342___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_unpause@anon@6193@__scribble_class_typist@__scribble_class_typist";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  uVar9 = 0xffffff;
  uStack_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xeb;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03d88);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    local_48 = 0xed;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04e58);
    plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ad8);
    iVar3 = FUN_140e4a740(plVar6);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != &local_88) {
      local_68 = *plVar7;
      uStack_60 = (undefined4)plVar7[1];
      uStack_5c = *(undefined4 *)((longlong)plVar7 + 0xc);
      FUN_140041b80(&local_88,&local_68);
      uVar9 = uStack_7c;
    }
    local_48 = 0xf0;
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04e58);
    FUN_140e609c0(param_1);
    local_8c = *(undefined4 *)((longlong)plVar6 + 0xc);
    local_90 = (undefined4)plVar6[1];
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
      local_98 = *plVar6;
    }
    else {
      FUN_1400419b0(&local_98,plVar6);
    }
    uStack_5c = 7;
    local_68 = CONCAT44(local_68._4_4_,2);
    FUN_1400460e0(&local_98,&local_68);
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    uStack_6c = local_8c;
    uStack_70 = local_90;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
      local_78 = local_98;
    }
    else {
      FUN_1400419b0(&local_78,&local_98);
    }
    uStack_5c = 7;
    local_68 = CONCAT44(local_68._4_4_,6);
    FUN_140046880(&local_78,&local_68);
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    if (&local_78 != plVar7) {
      local_68 = local_78;
      uStack_60 = uStack_70;
      uStack_5c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar7);
      }
      FUN_140041b80(plVar7,&local_68);
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140e60910(1);
    local_48 = 0xf1;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05ad8);
    FUN_140e609c0(param_1);
    uVar4 = FUN_140e4a740(plVar6);
    plVar7 = (longlong *)FUN_140e48e40(puVar8,uVar4);
    FUN_140e609c0(*(undefined8 *)*puVar8);
    if (&local_88 != plVar7) {
      local_68 = local_88;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar7);
      }
      FUN_140041b80(plVar7,&local_68);
    }
    FUN_140e60910(2);
    local_48 = 0xf2;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a077f8);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05ad8);
    FUN_140e609c0(param_1);
    uStack_70 = uStack_80;
    uStack_6c = uVar9;
    if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) == 0) {
      local_78 = local_88;
    }
    else {
      FUN_1400419b0(&local_78,&local_88);
    }
    FUN_1400462a0(&local_78,uVar5);
    local_8c = *(undefined4 *)((longlong)plVar6 + 0xc);
    local_90 = (undefined4)plVar6[1];
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
      local_98 = *plVar6;
    }
    else {
      FUN_1400419b0(&local_98,plVar6);
    }
    uStack_5c = 7;
    local_68 = CONCAT44(local_68._4_4_,1);
    FUN_1400460e0(&local_98,&local_68);
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    uVar4 = FUN_140e4a740(&local_98);
    plVar7 = (longlong *)FUN_140e48e40(puVar8,uVar4);
    FUN_140e609c0(*(undefined8 *)*puVar8);
    if (&local_78 != plVar7) {
      local_68 = local_78;
      uStack_60 = uStack_70;
      uStack_5c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar7);
      }
      FUN_140041b80(plVar7,&local_68);
    }
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140e60910(2);
  }
  local_48 = 0xf4;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b48);
  uStack_5c = 0xd;
  local_68 = 0;
  if (&local_68 != plVar7) {
    local_78 = 0;
    uStack_70 = uStack_60;
    uStack_6c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    FUN_140041b80(plVar7,&local_78);
  }
  local_48 = 0xf5;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03d88);
  uStack_5c = 0xd;
  local_68 = 0;
  if (&local_68 != plVar7) {
    local_78 = 0;
    uStack_70 = uStack_60;
    uStack_6c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    FUN_140041b80(plVar7,&local_78);
  }
  local_48 = 0xf7;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar5 = FUN_140e5c910();
  FUN_140e42c10(uVar5,param_1);
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

