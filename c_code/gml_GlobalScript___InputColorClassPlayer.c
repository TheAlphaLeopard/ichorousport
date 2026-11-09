// gml_GlobalScript___InputColorClassPlayer @ 0x1400695a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputColorClassPlayer(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined1 **ppuVar11;
  ulonglong in_stack_fffffffffffffee0;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  double local_108;
  uint local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined4 local_c4;
  undefined1 local_c0 [12];
  undefined4 local_b4;
  double local_b0;
  undefined4 local_a4;
  undefined1 local_a0 [12];
  undefined4 local_94;
  undefined1 *local_90;
  double *local_88;
  undefined1 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_f0 = "gml_Script__once@anon@518@__InputCollect@__InputCollect";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0xb;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_c0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_c4 = 0xffffff;
  local_d0 = (undefined1 *)0x0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc500) &&
     (_Init_thread_header(&DAT_141ddc500), DAT_141ddc500 == -1)) {
    DAT_141ddc508 = (longlong *)FUN_140e63aa0(DAT_1419fe9e8);
    _Init_thread_footer(&DAT_141ddc500);
  }
  if (DAT_141ddc034 == '\0') {
    FUN_140e64380(DAT_141ddc508,"gml_Script__once@anon@518@__InputCollect@__InputCollect");
    FUN_140e64380(local_res8,"gml_Script__once@anon@518@__InputCollect@__InputCollect");
  }
  local_e8 = 0xd;
  if (DAT_141ddc034 == '\0') {
    DAT_141ddc034 = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141ddc508 + 0x10))(DAT_141ddc508,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc508);
    puVar7 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_118,0,0);
    if (puVar7 != puVar6) {
      local_e0 = *puVar7;
      uStack_d8 = puVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_e0);
    }
    FUN_140e60910(1);
  }
  local_e8 = 0xe;
  uVar8 = (**(code **)(*DAT_141ddc508 + 8))(DAT_141ddc508,DAT_1419fcb48);
  iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar8);
  if (0 < iVar3) {
    local_88 = &local_b0;
    local_80 = local_a0;
    local_90 = local_c0;
    do {
      local_e8 = 0x10;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_118 = 0;
      local_110 = 0;
      local_10c = 5;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fea28);
      local_e0 = _DAT_141dc7b58;
      uStack_d8 = uRam0000000141dc7b60;
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c0);
      }
      FUN_140041b80(local_c0,&local_e0);
      iVar3 = 0;
      if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
        iVar3 = *(int *)(*plVar9 + 0x24);
      }
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      local_a4 = 0;
      local_b0 = (double)iVar3;
      local_e0 = CONCAT44(uRam0000000141dc7b7c,_DAT_141dc7b78);
      uStack_d8 = CONCAT44(DAT_141dc7b84,uRam0000000141dc7b80);
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a0);
      }
      FUN_140041b80(local_a0,&local_e0);
      ppuVar11 = &local_90;
      gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                (local_res8,local_res10,&local_118,3,ppuVar11);
      local_e8 = 0x11;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fea08);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0x3ff0000000000000;
      local_e8 = 0x13;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_fc = 0;
      local_108 = 0.0;
      iVar3 = 0;
      if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
        iVar3 = *(int *)(*plVar9 + 0x24);
      }
      while (0 < iVar3) {
        iVar3 = iVar3 + -1;
        local_e8 = 0x16;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fea28);
        plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fea28);
        iVar4 = FUN_140e4a740(&local_108);
        if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0))
        {
          if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          plVar10 = plVar9;
        }
        FUN_140e87440(plVar10,DAT_1419fda38,0x80000000,&local_d0,
                      (ulonglong)ppuVar11 & 0xffffffffffffff00,
                      in_stack_fffffffffffffee0 & 0xffffffffffffff00);
        iVar4 = FUN_140e4a740(&local_108);
        if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0))
        {
          if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar9 = (longlong *)0x0;
          }
          else {
            plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        uVar8 = FUN_140069500(plVar9);
        in_stack_fffffffffffffee0 = 0;
        ppuVar11 = &local_d0;
        FUN_140e63610(uVar8,local_res10,&local_118,0,ppuVar11,0);
        local_e8 = 0x17;
        uVar5 = local_fc & 0xffffff;
        if (uVar5 == 0) {
LAB_140069b35:
          local_108 = local_108 + 1.0;
        }
        else {
          if (uVar5 == 1) {
            local_108 = (double)FUN_140e4b060(&local_108);
            local_fc = 0;
            goto LAB_140069b35;
          }
          if (uVar5 == 7) {
            local_108 = (double)CONCAT44(local_108._4_4_,local_108._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_108 = (double)((longlong)local_108 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_fc = 0;
              goto LAB_140069b35;
            }
            FUN_140042910(&DAT_14172c3d8,&local_108,&local_108);
          }
        }
      }
      local_e8 = 0x1a;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_118 = 0;
      local_110 = 0;
      local_10c = 5;
      local_e0 = _DAT_141dc7b68;
      uStack_d8 = uRam0000000141dc7b70;
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c0);
      }
      FUN_140041b80(local_c0,&local_e0);
      gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                (local_res8,local_res10,&local_118,1,&local_90);
      local_e8 = 0x1b;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0x4000000000000000;
      cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar2 != '\0');
    param_3 = local_res18;
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_c0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

