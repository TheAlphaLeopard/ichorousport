// gml_Script___InputStringContains @ 0x1400d0160

longlong * gml_Script___InputStringContains(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar12;
  undefined4 uVar14;
  ulonglong uVar13;
  longlong **pplVar15;
  ulonglong uVar16;
  double local_158;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  longlong local_110;
  uint local_104;
  longlong local_100;
  undefined4 local_f4;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  longlong *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [12];
  undefined4 local_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_120 = "gml_Script___InputSteamHandlesChanged";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 3;
  pcVar12 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_104 = 0xffffff;
  local_110 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_f4 = 0xffffff;
  local_100 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_13c = 0;
  local_148 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc840) &&
     (_Init_thread_header(&DAT_141ddc840), DAT_141ddc840 == -1)) {
    DAT_141ddc838 = (longlong *)FUN_140e63aa0(DAT_141a02d68);
    _Init_thread_footer(&DAT_141ddc840);
  }
  if (DAT_141ddc05a == '\0') {
    FUN_140e64380(DAT_141ddc838,"gml_Script___InputSteamHandlesChanged");
    FUN_140e64380(local_res8,"gml_Script___InputSteamHandlesChanged");
  }
  local_118 = 5;
  if (DAT_141ddc05a == '\0') {
    DAT_141ddc05a = '\x01';
    puVar6 = (undefined4 *)(**(code **)(*DAT_141ddc838 + 0x10))(DAT_141ddc838,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc838);
    pcVar12 = (code *)0x0;
    puVar7 = (undefined4 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_148,0,0);
    if (puVar7 != puVar6) {
      local_e8 = *puVar7;
      uStack_e4 = puVar7[1];
      uStack_e0 = puVar7[2];
      uStack_dc = puVar7[3];
      if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_e8);
    }
    FUN_140e60910(1);
  }
  local_118 = 6;
  uVar8 = (**(code **)(*DAT_141ddc838 + 8))(DAT_141ddc838,DAT_1419fcb48);
  iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar8);
  if (0 < iVar3) {
    uVar11 = 0x3ff00000;
    do {
      uVar14 = (undefined4)((ulonglong)pcVar12 >> 0x20);
      local_118 = 8;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b28);
      if (plVar9 != &local_110) {
        local_e8 = (undefined4)*plVar9;
        uStack_e4 = *(undefined4 *)((longlong)plVar9 + 4);
        uStack_e0 = (undefined4)plVar9[1];
        uStack_dc = *(uint *)((longlong)plVar9 + 0xc);
        if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_110);
        }
        FUN_140041b80(&local_110,&local_e8);
      }
      local_118 = 9;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      uVar8 = CONCAT44(uVar14,DAT_1419febf8);
      puVar10 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_148,0,uVar8,0);
      uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (puVar10 != &local_138) {
        local_e8 = *(undefined4 *)puVar10;
        uStack_e4 = *(undefined4 *)((longlong)puVar10 + 4);
        uStack_e0 = *(undefined4 *)(puVar10 + 1);
        uStack_dc = *(uint *)((longlong)puVar10 + 0xc);
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_e8);
      }
      local_118 = 0xc;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      local_b8 = &local_138;
      pcVar12 = (code *)CONCAT44(uVar14,DAT_1419fdb88);
      uVar8 = FUN_140e634e0(local_res8,local_res10,&local_148,1,pcVar12,&local_b8);
      cVar2 = FUN_140e491e0(uVar8);
      if (cVar2 == '\0') {
        local_118 = 0xc;
        goto LAB_1400d0b12;
      }
      local_118 = 0xe;
      puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a01b28);
      FUN_140e609c0(local_res8);
      if (&local_138 != puVar10) {
        local_e8 = (undefined4)local_138;
        uStack_e4 = local_138._4_4_;
        uStack_e0 = uStack_130;
        uStack_dc = uStack_12c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        FUN_140041b80(puVar10,&local_e8);
      }
      FUN_140e60910(1);
      iVar3 = 0;
      if ((uStack_12c == 2) && (local_138 != 0)) {
        iVar3 = *(int *)(local_138 + 0x24);
      }
      iVar4 = 0;
      if ((local_104 == 2) && (local_110 != 0)) {
        iVar4 = *(int *)(local_110 + 0x24);
      }
      if (iVar3 != iVar4) {
        local_118 = 0x14;
        goto LAB_1400d0b15;
      }
      local_118 = 0x17;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_14c = 0;
      local_158 = 0.0;
      iVar3 = 0;
      if ((uStack_12c == 2) && (local_138 != 0)) {
        iVar3 = *(int *)(local_138 + 0x24);
      }
      while (0 < iVar3) {
        iVar3 = iVar3 + -1;
        local_118 = 0x1a;
        iVar4 = FUN_140e4a740(&local_158);
        plVar9 = (longlong *)0x0;
        if (((local_104 & 0xffffff) == 2) && (local_110 != 0)) {
          if ((iVar4 < 0) || (*(int *)(local_110 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(local_110 + 0x24));
          }
          else {
            plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_110 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          plVar9 = &local_110;
        }
        iVar4 = FUN_140e4a740(&local_158);
        puVar10 = (undefined8 *)0x0;
        if (((uStack_12c & 0xffffff) == 2) && (local_138 != 0)) {
          if ((iVar4 < 0) || (*(int *)(local_138 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(local_138 + 0x24));
          }
          else {
            puVar10 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(local_138 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          puVar10 = &local_138;
        }
        iVar4 = FUN_140e851f0(puVar10,plVar9,DAT_141955260);
        if (iVar4 != 0) {
          local_118 = 0x1e;
          goto LAB_1400d0b15;
        }
        local_118 = 0x20;
        uVar5 = local_14c & 0xffffff;
        if (uVar5 == 0) {
LAB_1400d076f:
          local_158 = local_158 + 1.0;
        }
        else {
          if (uVar5 == 1) {
            local_158 = (double)FUN_140e4b060(&local_158);
            local_14c = 0;
            goto LAB_1400d076f;
          }
          if (uVar5 == 7) {
            local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_158 = (double)((longlong)local_158 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_14c = 0;
              goto LAB_1400d076f;
            }
            FUN_140042910(&DAT_14172c3d8,&local_158,&local_158);
          }
        }
      }
      local_118 = 0x23;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_14c = 0;
      local_158 = 0.0;
      local_118 = 0x24;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a011a8);
      iVar3 = 0;
      if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
        iVar3 = *(int *)(*plVar9 + 0x24);
      }
      while (uVar14 = (undefined4)((ulonglong)pcVar12 >> 0x20), 0 < iVar3) {
        iVar3 = iVar3 + -1;
        local_118 = 0x26;
        plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a011a8);
        iVar4 = FUN_140e4a740(&local_158);
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
        if (plVar9 != &local_100) {
          local_e8 = (undefined4)*plVar9;
          uStack_e4 = *(undefined4 *)((longlong)plVar9 + 4);
          uStack_e0 = (undefined4)plVar9[1];
          uStack_dc = *(uint *)((longlong)plVar9 + 0xc);
          if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_100);
          }
          FUN_140041b80(&local_100,&local_e8);
        }
        local_118 = 0x28;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        local_b8 = &local_100;
        pplVar15 = &local_b8;
        pcVar12 = (code *)CONCAT44(uVar14,DAT_1419fcb88);
        uVar8 = FUN_140e634e0(local_res8,local_res10,&local_148,1,pcVar12,pplVar15);
        cVar2 = FUN_140e491e0(uVar8);
        if (cVar2 != '\0') {
          uVar16 = (ulonglong)pplVar15 & 0xffffffffffffff00;
          pcVar12 = (code *)((ulonglong)pcVar12 & 0xffffffffffffff00);
          FUN_140e87440(&local_100,DAT_1419fd378,0x80000000,&local_c8,pcVar12,uVar16);
          iVar4 = FUN_140e851f0(&local_c8,&DAT_1419df7b0,DAT_141955260);
          if (iVar4 != 0) {
            if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_d8);
            }
            local_d8 = 0;
            local_d0 = 0;
            local_cc = 5;
            uVar16 = uVar16 & 0xffffffffffffff00;
            uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
            FUN_140e87440(&local_100,DAT_1419fd1e8,0x80000000,&local_a8,uVar13,uVar16);
            uVar13 = uVar13 & 0xffffffffffffff00;
            FUN_140e87440(&local_100,DAT_1419fd378,0x80000000,&local_c8,uVar13,
                          uVar16 & 0xffffffffffffff00);
            uVar14 = (undefined4)(uVar13 >> 0x20);
            local_e8 = (undefined4)local_c8;
            uStack_e4 = local_c8._4_4_;
            uStack_e0 = uStack_c0;
            uStack_dc = uStack_bc;
            if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_88);
            }
            FUN_140041b80(local_88,&local_e8);
            pcVar12 = (code *)CONCAT44(uVar14,DAT_1419febf8);
            local_b0 = local_88;
            uVar8 = FUN_140e634e0(local_res8,local_res10,&local_d8,1,pcVar12,&local_b0);
            iVar4 = FUN_140e851f0(&local_a8,uVar8,DAT_141955260);
            if (iVar4 != 0) {
              local_118 = 0x2d;
              goto LAB_1400d0b15;
            }
          }
        }
        local_118 = 0x30;
        uVar5 = local_14c & 0xffffff;
        if (uVar5 == 0) {
LAB_1400d0ac2:
          local_158 = local_158 + 1.0;
        }
        else {
          if (uVar5 == 1) {
            local_158 = (double)FUN_140e4b060(&local_158);
            local_14c = 0;
            goto LAB_1400d0ac2;
          }
          if (uVar5 == 7) {
            local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_158 = (double)((longlong)local_158 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_14c = 0;
              goto LAB_1400d0ac2;
            }
            FUN_140042910(&DAT_14172c3d8,&local_158,&local_158);
          }
        }
      }
      cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  local_118 = 0x34;
LAB_1400d0b12:
  uVar11 = 0;
LAB_1400d0b15:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar11 << 0x20;
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

