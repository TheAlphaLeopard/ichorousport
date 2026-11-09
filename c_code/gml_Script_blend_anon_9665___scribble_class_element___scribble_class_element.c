// gml_Script_blend_anon_9665___scribble_class_element___scribble_class_element @ 0x140113750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_blend_anon_9665___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  byte local_res20;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined8 local_70;
  byte local_64;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50 [5];
  
  local_b0 = 
  "gml_Script_starting_format@anon@7528@__scribble_class_element@__scribble_class_element";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0xeb;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_res20 = 0;
  local_94 = 0;
  local_a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0xed;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140113832:
    local_e8 = *puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    FUN_140041b80(&local_70,&local_e8);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_70) goto LAB_140113832;
  }
  local_50[0] = &local_70;
  uVar8 = CONCAT44(uVar9,DAT_1419fdbf8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar8,local_50);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_a8 = 0xf5;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140113a01:
      local_d8 = *(undefined4 *)puVar5;
      uStack_d4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_d0 = *(undefined4 *)(puVar5 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      FUN_140041b80(&local_90,&local_d8);
    }
    else {
      puVar5 = (undefined8 *)*param_5;
      if (puVar5 != &local_90) goto LAB_140113a01;
    }
    local_60 = &local_90;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar9,DAT_1419fdc08),&local_60);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') {
      local_a8 = 0xf7;
      local_a0 = 0;
      local_98 = 0;
      local_94 = 5;
      local_d8 = _DAT_141dcb738;
      uStack_d4 = uRam0000000141dcb73c;
      uStack_d0 = uRam0000000141dcb740;
      uStack_cc = DAT_141dcb744;
      if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_80);
      }
      FUN_140041b80(local_80,&local_d8);
      local_58 = local_80;
      FUN_1401ef7f0(param_1,param_2,&local_a0,1,&local_58);
      local_res20 = (byte)local_94;
    }
  }
  else {
    local_a8 = 0xef;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05298);
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*param_5;
    }
    iVar2 = FUN_140e851f0(puVar5,uVar4,DAT_141955260,0);
    if (iVar2 != 0) {
      local_a8 = 0xf1;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05918);
      uStack_dc = 0xd;
      local_e8 = 0x3ff0000000000000;
      if (&local_e8 != puVar5) {
        local_d8 = 0;
        uStack_d4 = 0x3ff00000;
        uStack_d0 = uStack_e0;
        uStack_cc = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_d8);
      }
      local_a8 = 0xf2;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05298);
      FUN_140e609c0(param_1);
      if (param_4 < 1) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)*param_5;
      }
      if (puVar6 != puVar5) {
        local_d8 = *(undefined4 *)puVar6;
        uStack_d4 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_d0 = *(undefined4 *)(puVar6 + 1);
        uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_d8);
      }
      FUN_140e60910(1);
    }
  }
  local_a8 = 0xfa;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) goto LAB_140113d44;
  local_a8 = 0xfc;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_140113b55:
    local_d8 = *(undefined4 *)puVar5;
    uStack_d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_d0 = *(undefined4 *)(puVar5 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_d8);
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
    if (puVar5 != &local_90) goto LAB_140113b55;
  }
  local_60 = &local_90;
  puVar5 = (undefined8 *)
           gml_Script___scribble_array_find_index(param_1,param_2,&local_f8,1,&local_60);
  if (puVar5 != &local_c8) {
    local_d8 = *(undefined4 *)puVar5;
    uStack_d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_d0 = *(undefined4 *)(puVar5 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_d8);
  }
  local_a8 = 0xfd;
  iVar2 = FUN_140e851f0(&local_c8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 != 0) {
    uStack_dc = 0;
    local_e8 = 0;
    uVar3 = FUN_140e851f0(&local_c8,&local_e8,DAT_141955260,1);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if (uVar3 < 0x80000000) {
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a056d8);
      iVar2 = FUN_140e851f0(&local_c8,uVar4,DAT_141955260,0);
      if (iVar2 != 0) {
        local_a8 = 0xff;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05918);
        uStack_dc = 0xd;
        local_e8 = 0x3ff0000000000000;
        if (&local_e8 != puVar5) {
          local_d8 = 0;
          uStack_d4 = 0x3ff00000;
          uStack_d0 = uStack_e0;
          uStack_cc = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_d8);
        }
        local_a8 = 0x100;
        puVar7 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a056d8);
        FUN_140e609c0(param_1);
        uVar3 = FUN_140e4a8b0(&local_c8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 10;
        *puVar7 = (ulonglong)(uVar3 & 0xffffff);
        FUN_140e60910(1);
      }
    }
  }
LAB_140113d44:
  local_a8 = 0x104;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,param_1);
  if ((1 << (local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_90,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

