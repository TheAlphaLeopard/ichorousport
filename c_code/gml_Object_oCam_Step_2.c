// gml_Object_oCam_Step_2 @ 0x140886dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oCam_Step_2(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  double *pdVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  byte local_res20;
  undefined4 uVar17;
  undefined8 uVar15;
  undefined *puVar16;
  ulonglong uVar18;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  ulonglong uStack_1b0;
  double local_1a8;
  uint local_19c;
  ulonglong local_198;
  undefined4 local_190;
  uint local_18c;
  longlong *local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong *local_150;
  longlong *local_148;
  undefined1 *local_140;
  longlong local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined4 local_10c;
  uint local_108;
  longlong local_100;
  uint uStack_f4;
  longlong local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  ulonglong local_d0;
  undefined4 local_c8;
  uint local_c4;
  ulonglong local_c0;
  undefined4 local_b8;
  uint local_b4;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88 [4];
  undefined1 local_68 [48];
  
  local_170 = "gml_Object_oCam_Step_0";
  local_168 = 0;
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar7 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef358);
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_res20 = 0xff;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  uVar12 = 0xffffff;
  uStack_f4 = 0xffffff;
  local_100 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_168 = 3;
  FUN_14028e7b0(param_1,param_2,&local_1d8,0,0);
  local_168 = 4;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  gml_Script_anon_2489____struct___136___new_lighting_system_lighting_system
            (param_1,param_2,&local_1d8,0,0);
  local_168 = 5;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  gml_Script_bg_low_hp_flash_process(param_1,param_2,&local_1d8,0,0);
  local_168 = 6;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  gml_Script_bias(param_1,param_2,&local_1d8,0,0);
  local_168 = 8;
  cVar4 = FUN_140e491e0(uVar7);
  if (cVar4 == '\0') {
    local_168 = 0xd;
    pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a15d48);
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
      dVar14 = *pdVar8;
    }
    else {
      dVar14 = (double)FUN_140e4b060(pdVar8);
    }
    FUN_140e98bf0(param_1,param_2,(longlong)dVar14);
    local_168 = 0x12;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57ff0);
    uVar18 = 0;
    FUN_140e63610(param_1,param_2,&local_1d8,0,uVar9,0);
    local_168 = 0x14;
    uStack_1bc = 6;
    uVar18 = uVar18 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_98,uVar9,uVar18);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uStack_1b0 = CONCAT44(uStack_8c,uStack_90);
    local_1b8 = local_98;
    FUN_140041b80(&local_c0,&local_1b8);
    local_168 = 0x15;
    uStack_1bc = 6;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_a8,uVar9,uVar18 & 0xffffffffffffff00);
    uVar17 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uStack_1b0 = CONCAT44(uStack_9c,uStack_a0);
    local_1b8 = local_a8;
    FUN_140041b80(&local_d0,&local_1b8);
    local_168 = 0x17;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    local_1b8 = _DAT_141dd73d8;
    uStack_1b0 = uRam0000000141dd73e0;
    if ((1 << ((byte)local_88[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_1b8);
    local_150 = local_88;
    uVar7 = CONCAT44(uVar17,DAT_141a1c640);
    puVar10 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar7,&local_150);
    uVar17 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar10 != &local_138) {
      local_1b8 = (longlong *)*puVar10;
      uStack_1b0 = puVar10[1];
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1b8);
    }
    local_168 = 0x18;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    local_150 = &local_138;
    uVar15 = CONCAT44(uVar17,DAT_141a1c670);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar15,&local_150);
    uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
    cVar4 = FUN_140e491e0(uVar7);
    uVar3 = local_b4;
    uVar5 = local_c4;
    local_108 = local_b4;
    local_res20 = (byte)local_c4;
    if (cVar4 != '\0') {
      local_168 = 0x1a;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a199f0);
      local_18c = uVar3;
      local_190 = local_b8;
      if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) == 0) {
        local_198 = local_c0;
      }
      else {
        FUN_1400419b0(&local_198,&local_c0);
      }
      FUN_1400462a0(&local_198,uVar7);
      if ((local_18c & 0xffffff) == 0) {
        uVar9 = local_198;
      }
      else {
        uVar9 = FUN_140e4b060(&local_198);
      }
      uVar18 = uStack_1b0;
      uStack_1b0 = uStack_1b0 & 0xffffffff;
      uVar2 = uStack_1b0;
      local_1c8 = (longlong *)(uVar9 ^ 0x8000000000000000);
      uStack_1bc = 0;
      uStack_1b0._0_4_ = (undefined4)uVar18;
      uStack_1c0 = (undefined4)uStack_1b0;
      uStack_180 = (ulonglong)(uint)uStack_180;
      local_188 = (longlong *)0x3fa47ae147ae147b;
      local_1b8 = local_1c8;
      uStack_1b0 = uVar2;
      FUN_140042560(&local_1c8,&local_188);
      if ((1 << ((byte)(uStack_180 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      uStack_180 = CONCAT44(uStack_1bc,uStack_1c0);
      local_188 = local_1c8;
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140041b80(&local_e0,&local_188);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_168 = 0x1b;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a19bf0);
      local_18c = uVar5;
      local_190 = local_c8;
      if ((1 << (local_res20 & 0x1f) & 0x46U) == 0) {
        local_198 = local_d0;
      }
      else {
        FUN_1400419b0(&local_198,&local_d0);
      }
      FUN_1400462a0(&local_198,uVar7);
      if ((local_18c & 0xffffff) == 0) {
        uVar9 = local_198;
      }
      else {
        uVar9 = FUN_140e4b060(&local_198);
      }
      uVar18 = uStack_1b0;
      uStack_1b0 = uStack_1b0 & 0xffffffff;
      uVar2 = uStack_1b0;
      local_1c8 = (longlong *)(uVar9 ^ 0x8000000000000000);
      uStack_1bc = 0;
      uStack_1b0._0_4_ = (undefined4)uVar18;
      uStack_1c0 = (undefined4)uStack_1b0;
      uStack_180 = uStack_180 & 0xffffffff;
      local_188 = (longlong *)0x3fa47ae147ae147b;
      local_1b8 = local_1c8;
      uStack_1b0 = uVar2;
      FUN_140042560(&local_1c8,&local_188);
      if ((1 << ((byte)(uStack_180 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      uStack_180 = CONCAT44(uStack_1bc,uStack_1c0);
      local_188 = local_1c8;
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      FUN_140041b80(&local_f0,&local_188);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_168 = 0x1c;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      local_150 = &local_138;
      local_148 = &local_e0;
      uVar7 = CONCAT44(uVar17,DAT_141a199b0);
      FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar7,&local_150);
      uVar17 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_168 = 0x1d;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      local_150 = &local_138;
      local_148 = &local_f0;
      FUN_140e634e0(param_1,param_2,&local_1d8,2,CONCAT44(uVar17,DAT_141a198c0),&local_150);
    }
    local_168 = 0x20;
    puVar16 = &DAT_141dd73f8;
    plVar11 = (longlong *)
              FUN_140e8da20(&local_1d8,param_1,5,&DAT_141dd73c8,&DAT_141dd73f8,&DAT_141dd73e8,
                            &DAT_141dd7408,&DAT_141dd7418);
    lVar13 = 0;
    if (plVar11 != &local_100) {
      local_1b8 = (longlong *)*plVar11;
      uStack_1b0 = plVar11[1];
      FUN_140041b80(&local_100,&local_1b8);
      lVar13 = local_100;
      uVar12 = uStack_f4;
    }
    local_168 = 0x21;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_19c = 0;
    local_1a8 = 0.0;
    bVar1 = true;
LAB_140887700:
    uVar17 = (undefined4)((ulonglong)puVar16 >> 0x20);
    iVar6 = 0;
    if (!bVar1) {
      local_168 = 0x21;
      uVar5 = local_19c & 0xffffff;
      if (uVar5 != 0) {
        if (uVar5 != 1) {
          if (uVar5 == 7) {
            local_1a8 = (double)CONCAT44(local_1a8._4_4_,local_1a8._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_1a8 = (double)((longlong)local_1a8 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_19c = 0;
              goto LAB_140887755;
            }
            FUN_140042910(&DAT_14172c3d8,&local_1a8,&local_1a8);
          }
          goto LAB_14088775f;
        }
        local_1a8 = (double)FUN_140e4b060(&local_1a8);
        local_19c = 0;
      }
LAB_140887755:
      local_1a8 = local_1a8 + 1.0;
    }
LAB_14088775f:
    bVar1 = false;
    if ((uVar12 == 2) && (lVar13 != 0)) {
      iVar6 = *(int *)(lVar13 + 0x24);
    }
    uStack_180 = uStack_180 & 0xffffffff;
    local_188 = (longlong *)(double)iVar6;
    iVar6 = FUN_140e851f0(&local_1a8,&local_188,DAT_141955260,1);
    if ((1 << ((byte)(uStack_180 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if (iVar6 != -2 && iVar6 < 0) {
      local_168 = 0x23;
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_160);
      }
      plVar11 = (longlong *)0x0;
      local_160 = 0;
      local_158 = 0;
      local_154 = 5;
      iVar6 = FUN_140e4a740(&local_1a8);
      if (((uVar12 & 0xffffff) == 2) && (lVar13 != 0)) {
        if ((iVar6 < 0) || (*(int *)(lVar13 + 0x24) <= iVar6)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                        *(undefined4 *)(lVar13 + 0x24));
        }
        else {
          plVar11 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar13 + 8));
        }
        if (plVar11 != local_88) goto LAB_14088787d;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar11 = &local_100;
LAB_14088787d:
        local_1b8 = (longlong *)*plVar11;
        uStack_1b0 = plVar11[1];
        if ((1 << ((byte)local_88[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_88);
        }
        FUN_140041b80(local_88,&local_1b8);
      }
      local_150 = local_88;
      uVar7 = CONCAT44(uVar17,DAT_141a1c640);
      plVar11 = (longlong *)FUN_140e634e0(param_1,param_2,&local_160,1,uVar7,&local_150);
      uVar17 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (plVar11 != &local_118) {
        local_1b8 = (longlong *)*plVar11;
        uStack_1b0 = plVar11[1];
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_1b8);
      }
      local_168 = 0x24;
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_160);
      }
      local_160 = 0;
      local_158 = 0;
      local_154 = 5;
      puVar16 = (undefined *)CONCAT44(uVar17,DAT_141a1c670);
      local_150 = &local_118;
      uVar7 = FUN_140e634e0(param_1,param_2,&local_160,1,puVar16,&local_150);
      cVar4 = FUN_140e491e0(uVar7);
      uVar17 = (undefined4)((ulonglong)puVar16 >> 0x20);
      if (cVar4 != '\0') {
        local_168 = 0x25;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        local_1b8 = _DAT_1419df7a0;
        uStack_1b0 = uRam00000001419df7a8;
        local_148 = &local_118;
        if ((1 << (local_68[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_68);
        }
        FUN_140041b80(local_68,&local_1b8);
        local_140 = local_68;
        puVar16 = (undefined *)CONCAT44(uVar17,DAT_141a19b30);
        FUN_140e634e0(param_1,param_2,&local_128,2,puVar16,&local_148);
      }
      goto LAB_140887700;
    }
    uVar5 = local_108;
  }
  else {
    local_168 = 9;
    FUN_140edce70(0,0);
    local_168 = 10;
    uVar5 = 0xffffff;
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << (local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return;
}

