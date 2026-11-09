// gml_GlobalScript___InputTrace @ 0x1400d5950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_GlobalScript___InputTrace(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  double *pdVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  double dVar13;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 uVar14;
  double local_e8;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 local_90 [12];
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  longlong local_60;
  
  local_c0 = "gml_Script__playerArray@anon@93@__InputSystemPlayerArray@__InputSystemPlayerArray";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 5;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_90,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 7;
  uVar14 = 0;
  uVar6 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                    (local_res8,local_res10,&local_d8,0,0);
  iVar3 = FUN_140e63cb0(local_70,&local_res8,&local_res10,uVar6);
  if (iVar3 < 1) {
    FUN_140e63970(local_70,&local_res8,&local_res10);
  }
  else {
    local_b8 = 10;
    plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd668);
    pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd6a8);
    iVar3 = 0;
    if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
      iVar3 = *(int *)(*plVar7 + 0x24);
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar8);
    }
    *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
    *pdVar8 = (double)iVar3;
    local_b8 = 0xb;
    plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd578);
    pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd738);
    iVar3 = 0;
    if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
      iVar3 = *(int *)(*plVar7 + 0x24);
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar8);
    }
    *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
    *pdVar8 = (double)iVar3;
    local_b8 = 0xe;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_dc = 0;
    local_e8 = 0.0;
    local_b8 = 0xf;
    pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6a8);
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar8;
    }
    else {
      dVar13 = (double)FUN_140e4b060(pdVar8);
    }
    uVar4 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uVar12 = (ulonglong)dVar13;
    uVar11 = (uint)uVar12;
    while (0 < (int)uVar11) {
      uVar4 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar11 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar11;
      local_b8 = 0x11;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd668);
      iVar3 = FUN_140e4a740(&local_e8);
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
      FUN_140041c60(local_90,plVar7);
      local_a0 = local_90;
      uVar14 = CONCAT44(uVar4,DAT_1419fcb88);
      uVar6 = FUN_140e634e0(local_res8,local_res10,&local_d8,1,uVar14,&local_a0);
      cVar2 = FUN_140e491e0(uVar6);
      if (cVar2 == '\0') {
        local_b8 = 0x13;
        puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd668);
        FUN_140e609c0(local_res8);
        uVar4 = FUN_140e4a740(&local_e8);
        puVar10 = (undefined8 *)FUN_140e48e40(puVar9,uVar4);
        FUN_140e609c0(*(undefined8 *)*puVar9);
        if (puVar10 != &DAT_1419df7b0) {
          local_b0 = DAT_1419df7b0;
          uStack_a8 = _DAT_1419df7b8;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar10);
          }
          FUN_140041b80(puVar10,&local_b0);
        }
        FUN_140e60910(2);
      }
      local_b8 = 0x16;
      uVar5 = local_dc & 0xffffff;
      if (uVar5 == 0) {
LAB_1400d5d43:
        local_e8 = local_e8 + 1.0;
      }
      else {
        if (uVar5 == 1) {
          local_e8 = (double)FUN_140e4b060(&local_e8);
          local_dc = 0;
          goto LAB_1400d5d43;
        }
        if (uVar5 == 7) {
          local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
        }
        else if (uVar5 == 10) {
          local_e8 = (double)((longlong)local_e8 + 1);
        }
        else {
          if (uVar5 == 0xd) {
            local_dc = 0;
            goto LAB_1400d5d43;
          }
          FUN_140042910(&DAT_14172c3d8,&local_e8,&local_e8);
        }
      }
      uVar4 = (undefined4)((ulonglong)uVar14 >> 0x20);
    }
    local_b8 = 0x1a;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar14 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fed38);
    local_b0 = _DAT_1419e1b10;
    uStack_a8 = uRam00000001419e1b18;
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_b0);
    local_a0 = local_90;
    FUN_140e645a0(&local_b0,gml_Script___InputSystemPlayerArray,local_res8);
    FUN_140041c60(local_80,&local_b0);
    if ((1 << ((byte)((ulonglong)uStack_a8 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    local_98 = local_80;
    FUN_140e609c0(local_res8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_d8,2,CONCAT44(uVar4,DAT_1419fd628),&local_a0
                         );
    FUN_140041c60(uVar14,uVar6);
    FUN_140e60910(1);
    local_b8 = 0x1f;
    uVar14 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fed38);
    FUN_140041c60(param_3,uVar14);
  }
  if (local_60 != 0) {
    FUN_140e4cd60();
    local_60 = 0;
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

