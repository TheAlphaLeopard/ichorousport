// gml_Script_anon_5729____struct___341_gml_Object_oBossEmbrace_Create_0 @ 0x14072d7e0

undefined8 *
gml_Script_anon_5729____struct___341_gml_Object_oBossEmbrace_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *local_res8;
  undefined8 local_res10;
  longlong *local_res18 [2];
  code *pcVar8;
  undefined4 uVar9;
  double local_118;
  uint local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  longlong local_e8 [2];
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0 [16];
  longlong local_a0;
  undefined1 local_90 [16];
  longlong local_80;
  
  local_d0 = "gml_Script_anon@5326@gml_Object_oBossEmbrace_Create_0";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0xb6;
  pcVar8 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_e8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0xb7;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a07088);
  iVar4 = FUN_140e63cb0(local_90,&local_res8,&local_res10,uVar6);
  if (0 < iVar4) {
LAB_14072d8e0:
    local_c8 = 0xb8;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_10c = 0;
    local_118 = 0.0;
    bVar2 = true;
    do {
      if (!bVar2) {
        local_c8 = 0xb8;
        uVar5 = local_10c & 0xffffff;
        if (uVar5 != 0) {
          if (uVar5 != 1) {
            if (uVar5 == 7) {
              local_118 = (double)CONCAT44(local_118._4_4_,local_118._0_4_ + 1);
            }
            else if (uVar5 == 10) {
              local_118 = (double)((longlong)local_118 + 1);
            }
            else {
              if (uVar5 == 0xd) {
                local_10c = 0;
                goto LAB_14072d96c;
              }
              FUN_140042910(&DAT_14172c3d8,&local_118,&local_118);
            }
            goto LAB_14072d976;
          }
          local_118 = (double)FUN_140e4b060(&local_118);
          local_10c = 0;
        }
LAB_14072d96c:
        local_118 = local_118 + 1.0;
      }
LAB_14072d976:
      bVar2 = false;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06e18);
      iVar4 = FUN_140e851f0(&local_118,uVar6,DAT_141955260,1);
      uVar9 = (undefined4)((ulonglong)pcVar8 >> 0x20);
      if ((iVar4 == -2) || (-1 < iVar4)) goto LAB_14072dbba;
      local_c8 = 0xb9;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06e38);
      iVar4 = FUN_140e4a740(&local_118);
      if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar7 != local_e8) {
        local_c0 = (undefined4)*plVar7;
        uStack_bc = *(undefined4 *)((longlong)plVar7 + 4);
        uStack_b8 = (undefined4)plVar7[1];
        uStack_b4 = *(undefined4 *)((longlong)plVar7 + 0xc);
        if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_c0);
      }
      local_res18[0] = local_e8;
      pcVar8 = (code *)CONCAT44(uVar9,DAT_141a02ef8);
      uVar6 = FUN_140e634e0(local_res8,local_res10,&local_108,1,pcVar8,local_res18);
      cVar3 = FUN_140e491e0(uVar6);
      if (cVar3 != '\0') {
        local_c8 = 0xb9;
        plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06e38);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        local_ec = 0;
        local_f8 = 0x4000000000000000;
        iVar4 = FUN_140e4a740(&local_118);
        if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0))
        {
          if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        FUN_140e87930(plVar7,DAT_141a07468,0x80000000,&local_f8);
      }
    } while( true );
  }
LAB_14072dbd3:
  FUN_140e63970(local_90,&local_res8,&local_res10);
  local_c8 = 0xbc;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06c38);
  iVar4 = FUN_140e63cb0(local_b0,&local_res8,&local_res10,uVar6);
  if (iVar4 < 1) {
LAB_14072df13:
    FUN_140e63970(local_b0,&local_res8,&local_res10);
    if (local_a0 != 0) {
      FUN_140e4cd60();
      local_a0 = 0;
    }
    if (local_80 != 0) {
      FUN_140e4cd60();
      local_80 = 0;
    }
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    _eh_vector_destructor_iterator_(local_e8,0x10,1,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_d8;
    return param_3;
  }
LAB_14072dc20:
  local_c8 = 0xbd;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_c8 = 0xbd;
      uVar5 = local_10c & 0xffffff;
      if (uVar5 != 0) {
        if (uVar5 != 1) {
          if (uVar5 == 7) {
            local_118 = (double)CONCAT44(local_118._4_4_,local_118._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_118 = (double)((longlong)local_118 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_10c = 0;
              goto LAB_14072dcac;
            }
            FUN_140042910(&DAT_14172c3d8,&local_118,&local_118);
          }
          goto LAB_14072dcb6;
        }
        local_118 = (double)FUN_140e4b060(&local_118);
        local_10c = 0;
      }
LAB_14072dcac:
      local_118 = local_118 + 1.0;
    }
LAB_14072dcb6:
    bVar2 = false;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06e18);
    iVar4 = FUN_140e851f0(&local_118,uVar6,DAT_141955260,1);
    uVar9 = (undefined4)((ulonglong)pcVar8 >> 0x20);
    if ((iVar4 == -2) || (-1 < iVar4)) goto LAB_14072defa;
    local_c8 = 0xbe;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06e38);
    iVar4 = FUN_140e4a740(&local_118);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != local_e8) {
      local_c0 = (undefined4)*plVar7;
      uStack_bc = *(undefined4 *)((longlong)plVar7 + 4);
      uStack_b8 = (undefined4)plVar7[1];
      uStack_b4 = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_c0);
    }
    local_res18[0] = local_e8;
    pcVar8 = (code *)CONCAT44(uVar9,DAT_141a02ef8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_108,1,pcVar8,local_res18);
    cVar3 = FUN_140e491e0(uVar6);
    if (cVar3 != '\0') {
      local_c8 = 0xbe;
      plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06e38);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_ec = 0;
      local_f8 = 0x4000000000000000;
      iVar4 = FUN_140e4a740(&local_118);
      if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      FUN_140e87930(plVar7,DAT_141a07468,0x80000000,&local_f8);
    }
  } while( true );
LAB_14072dbba:
  cVar3 = FUN_140e643f0(local_90,&local_res8,&local_res10);
  if (cVar3 == '\0') goto LAB_14072dbd3;
  goto LAB_14072d8e0;
LAB_14072defa:
  cVar3 = FUN_140e643f0(local_b0,&local_res8,&local_res10);
  if (cVar3 == '\0') goto LAB_14072df13;
  goto LAB_14072dc20;
}

