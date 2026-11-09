// gml_Script_InputDeviceGetNewActivityOnVerb @ 0x140320140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputDeviceGetNewActivityOnVerb
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  double local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  longlong local_a0;
  uint uStack_94;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  byte local_5c;
  
  local_b0 = "gml_Script_InputDeviceGetNewActivity";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 5;
  _eh_vector_constructor_iterator_(&local_68,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_94 = 0xffffff;
  local_a0 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 7;
  local_88 = _DAT_1419df7a0;
  uStack_84 = uRam00000001419df7a4;
  uStack_80 = uRam00000001419df7a8;
  uStack_7c = uRam00000001419df7ac;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_88);
  local_78 = &local_68;
  plVar4 = (longlong *)
           gml_Script_InputDeviceGetAnyGamepadConnected(param_1,param_2,&local_d8,1,&local_78);
  lVar6 = 0;
  uVar7 = 0xffffff;
  if (plVar4 != &local_a0) {
    local_88 = (undefined4)*plVar4;
    uStack_84 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_80 = (undefined4)plVar4[1];
    uStack_7c = *(undefined4 *)((longlong)plVar4 + 0xc);
    FUN_140041b80(&local_a0,&local_88);
    lVar6 = local_a0;
    uVar7 = uStack_94;
  }
  local_a8 = 8;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0.0;
  iVar8 = 0;
  if ((uVar7 == 2) && (lVar6 != 0)) {
    iVar8 = *(int *)(lVar6 + 0x24);
  }
  if (0 < iVar8) {
    do {
      iVar8 = iVar8 + -1;
      local_a8 = 0xb;
      iVar2 = FUN_140e4a740(&local_f8);
      plVar4 = (longlong *)0x0;
      if (((uVar7 & 0xffffff) == 2) && (lVar6 != 0)) {
        if ((iVar2 < 0) || (*(int *)(lVar6 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(lVar6 + 0x24));
        }
        else {
          plVar4 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar6 + 8));
        }
        if (plVar4 != &local_e8) goto LAB_140320355;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar4 = &local_a0;
LAB_140320355:
        local_88 = (undefined4)*plVar4;
        uStack_84 = *(undefined4 *)((longlong)plVar4 + 4);
        uStack_80 = (undefined4)plVar4[1];
        uStack_7c = *(undefined4 *)((longlong)plVar4 + 0xc);
        if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_88);
      }
      local_a8 = 0xc;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      local_78 = &local_e8;
      uVar5 = gml_Script_InputDeviceIsConnected(param_1,param_2,&local_d8,1,&local_78);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 != '\0') {
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        local_c8 = 0;
        local_c0 = 0;
        local_bc = 5;
        local_70 = &local_e8;
        uVar5 = gml_Script_InputDeviceIsAvailable(param_1,param_2,&local_c8,1,&local_70);
        cVar1 = FUN_140e491e0(uVar5);
        if (cVar1 != '\0') {
          local_a8 = 0xe;
          if (&local_e8 != param_3) {
            local_88 = (undefined4)local_e8;
            uStack_84 = local_e8._4_4_;
            uStack_80 = uStack_e0;
            uStack_7c = uStack_dc;
            if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(param_3);
            }
            FUN_140041b80(param_3,&local_88);
          }
          goto LAB_1403204e1;
        }
      }
      local_a8 = 0x11;
      uVar3 = local_ec & 0xffffff;
      if (uVar3 == 0) {
LAB_14032049c:
        local_f8 = local_f8 + 1.0;
      }
      else {
        if (uVar3 == 1) {
          local_f8 = (double)FUN_140e4b060(&local_f8);
          local_ec = 0;
          goto LAB_14032049c;
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
            goto LAB_14032049c;
          }
          FUN_140042910(&DAT_14172c3d8,&local_f8,&local_f8);
        }
      }
    } while (0 < iVar8);
  }
  local_a8 = 0x14;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = &DAT_bff0000000000000;
LAB_1403204e1:
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(&local_68,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

