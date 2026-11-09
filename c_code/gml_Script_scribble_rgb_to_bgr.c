// gml_Script_scribble_rgb_to_bgr @ 0x14048c3f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_rgb_to_bgr(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *local_res8;
  undefined8 local_res10;
  longlong **pplVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffe90;
  ulonglong uVar11;
  double local_168;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  longlong local_148;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  longlong *local_c0;
  double *local_b8;
  undefined1 *local_b0;
  longlong local_a8;
  byte local_9c;
  undefined1 local_88 [12];
  undefined4 local_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_100 = "gml_Script_scribble_refresh_everything";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_c4 = 0xffffff;
  local_d0 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 6;
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_f0 = (undefined4)DAT_1419df7b0;
  uStack_ec = DAT_1419df7b0._4_4_;
  uStack_e8 = DAT_1419df7b8;
  uStack_e4 = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_f0);
  local_c0 = &local_a8;
  pplVar8 = &local_c0;
  uVar6 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_158,1,pplVar8);
  puVar9 = (undefined8 *)((ulonglong)pplVar8 & 0xffffffffffffff00);
  FUN_140e87440(uVar6,DAT_141a05138,0x80000000,&local_d0,puVar9,
                in_stack_fffffffffffffe90 & 0xffffffffffffff00);
  iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_d0);
  if (0 < iVar2) {
    do {
      local_f8 = 8;
      plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a05958);
      if (plVar7 != &local_148) {
        local_f0 = (undefined4)*plVar7;
        uStack_ec = *(undefined4 *)((longlong)plVar7 + 4);
        uStack_e8 = (undefined4)plVar7[1];
        uStack_e4 = *(undefined4 *)((longlong)plVar7 + 0xc);
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_f0);
      }
      local_f8 = 9;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_15c = 0;
      local_168 = 0.0;
      local_f8 = 10;
      iVar2 = 0;
      if ((uStack_13c == 2) && (local_148 != 0)) {
        iVar2 = *(int *)(local_148 + 0x24);
      }
joined_r0x00014048c63e:
      if (0 < iVar2) {
        uVar4 = (undefined4)((ulonglong)puVar9 >> 0x20);
        iVar2 = iVar2 + -1;
        local_f8 = 0xc;
        iVar3 = FUN_140e4a740(&local_168);
        plVar7 = (longlong *)0x0;
        if (((uStack_13c & 0xffffff) == 2) && (local_148 != 0)) {
          if ((iVar3 < 0) || (*(int *)(local_148 + 0x24) <= iVar3)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                          *(undefined4 *)(local_148 + 0x24));
          }
          else {
            plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_148 + 8));
          }
          if (plVar7 != &local_118) goto LAB_14048c6c3;
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          plVar7 = &local_148;
LAB_14048c6c3:
          local_f0 = (undefined4)*plVar7;
          uStack_ec = *(undefined4 *)((longlong)plVar7 + 4);
          uStack_e8 = (undefined4)plVar7[1];
          uStack_e4 = *(undefined4 *)((longlong)plVar7 + 0xc);
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_f0);
        }
        local_f8 = 0xd;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        local_c0 = &local_118;
        pplVar8 = &local_c0;
        uVar10 = CONCAT44(uVar4,DAT_141a04538);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_158,1,uVar10,pplVar8);
        cVar1 = FUN_140e491e0(uVar6);
        if (cVar1 == '\0') goto LAB_14048c8db;
        local_f8 = 0xf;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        uVar11 = (ulonglong)pplVar8 & 0xffffffffffffff00;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_118,DAT_141a05da8,0x80000000,&local_138,uVar10,uVar11);
        FUN_140e87440(&local_138,DAT_141a05078,0x80000000,&local_e0,uVar10 & 0xffffffffffffff00,
                      uVar11 & 0xffffffffffffff00);
        switch(local_12c) {
        default:
switchD_14048c7f4_caseD_1:
          uVar6 = 0;
          break;
        case 6:
          uVar6 = local_138;
          break;
        case 0xf:
          iVar3 = (int)((ulonglong)local_138 >> 0x20);
          if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_14048c7f4_caseD_1;
        case 0:
        case 7:
        case 10:
        case 0xd:
          uVar4 = FUN_140e4a8b0(&local_138);
          uVar6 = FUN_140e87250(uVar4);
        }
        puVar9 = &local_e0;
        FUN_140e63610(uVar6,local_res10,&local_128,0,puVar9,0);
        local_f8 = 0x10;
        uVar5 = local_15c & 0xffffff;
        if (uVar5 != 0) {
          if (uVar5 == 1) {
            local_168 = (double)FUN_140e4b060(&local_168);
            local_168 = local_168 + 1.0;
            local_15c = 0;
            goto joined_r0x00014048c63e;
          }
          if (uVar5 == 7) {
            local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
            goto joined_r0x00014048c63e;
          }
          if (uVar5 == 10) {
            local_168 = (double)((longlong)local_168 + 1);
            goto joined_r0x00014048c63e;
          }
          if (uVar5 != 0xd) {
            FUN_140042910(&DAT_14172c3d8,&local_168,&local_168);
            goto joined_r0x00014048c63e;
          }
          local_15c = 0;
        }
        local_168 = local_168 + 1.0;
        goto joined_r0x00014048c63e;
      }
      cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
LAB_14048c8db:
  local_f8 = 0x14;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uVar4 = (undefined4)(uVar10 >> 0x20);
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_c0 = &local_148;
  local_b8 = &local_168;
  local_f0 = _DAT_1419e5f10;
  uStack_ec = uRam00000001419e5f14;
  uStack_e8 = uRam00000001419e5f18;
  uStack_e4 = uRam00000001419e5f1c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_f0);
  local_b0 = local_88;
  puVar9 = (undefined8 *)CONCAT44(uVar4,DAT_1419fd808);
  FUN_140e634e0(local_res8,local_res10,&local_158,3,puVar9,&local_c0);
  goto joined_r0x00014048c63e;
}

