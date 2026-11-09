// gml_Script_get_events_anon_44311___scribble_class_element___scribble_class_element @ 0x14012e7a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_get_events_anon_44311___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  code *pcVar9;
  undefined4 uVar10;
  double local_f8;
  uint local_ec;
  longlong local_e8;
  uint local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  double *local_80;
  undefined1 *local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [12];
  undefined4 local_44;
  
  local_b0 = "gml_Script_flush@anon@42972@__scribble_class_element@__scribble_class_element";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x577;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x57b;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05c98);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_a8 = 0x57f;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04d68);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a058c8);
    FUN_140e98dc0(param_1,param_2,uVar4,uVar5);
    local_a8 = 0x581;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05cd8);
    if (plVar6 != &local_e8) {
      local_d8 = (longlong *)*plVar6;
      uStack_d0 = (undefined4)plVar6[1];
      uStack_cc = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_d8);
    }
    local_a8 = 0x582;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_ec = 0;
    local_f8 = 0.0;
    iVar8 = 0;
    if ((local_dc == 2) && (local_e8 != 0)) {
      iVar8 = *(int *)(local_e8 + 0x24);
    }
    while (0 < iVar8) {
      iVar8 = iVar8 + -1;
      local_a8 = 0x585;
      iVar2 = FUN_140e4a740(&local_f8);
      plVar6 = (longlong *)0x0;
      if (((local_dc & 0xffffff) == 2) && (local_e8 != 0)) {
        if ((iVar2 < 0) || (*(int *)(local_e8 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(local_e8 + 0x24));
        }
        else {
          plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(local_e8 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar6 = &local_e8;
      }
      uStack_cc = 6;
      local_d8 = param_1;
      iVar2 = FUN_140e851f0(plVar6,&local_d8,DAT_141955260,0);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      uVar10 = (undefined4)((ulonglong)pcVar9 >> 0x20);
      if (iVar2 == 0) {
        local_a8 = 0x587;
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        local_c8 = 0;
        local_c0 = 0;
        local_bc = 5;
        local_88 = &local_e8;
        local_80 = &local_f8;
        local_98 = _DAT_1419e1d80;
        uStack_94 = uRam00000001419e1d84;
        uStack_90 = uRam00000001419e1d88;
        uStack_8c = uRam00000001419e1d8c;
        if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_50);
        }
        FUN_140041b80(local_50,&local_98);
        local_78 = local_50;
        pcVar9 = (code *)CONCAT44(uVar10,DAT_1419fd808);
        FUN_140e634e0(param_1,param_2,&local_c8,3,pcVar9,&local_88);
      }
      else {
        local_a8 = 0x58b;
        uVar3 = local_ec & 0xffffff;
        if (uVar3 == 0) {
LAB_14012eb59:
          local_f8 = local_f8 + 1.0;
        }
        else {
          if (uVar3 == 1) {
            local_f8 = (double)FUN_140e4b060(&local_f8);
            local_ec = 0;
            goto LAB_14012eb59;
          }
          if (uVar3 == 7) {
            local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_f8 = (double)((longlong)local_f8 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_ec = 0;
              goto LAB_14012eb59;
            }
            FUN_140042910(&DAT_14172c3d8,&local_f8,&local_f8);
          }
        }
      }
    }
    local_a8 = 0x590;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05c98);
    uStack_cc = 0xd;
    local_d8 = (longlong *)0x3ff0000000000000;
    if (&local_d8 != puVar7) {
      local_98 = 0;
      uStack_94 = 0x3ff00000;
      uStack_90 = uStack_d0;
      uStack_8c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_98);
    }
  }
  else {
    local_a8 = 0x57b;
    if (param_3 != &DAT_1419df7b0) {
      local_d8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_d0 = DAT_1419df7b8;
      uStack_cc = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_d8);
    }
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

