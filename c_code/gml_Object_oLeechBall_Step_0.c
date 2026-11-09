// gml_Object_oLeechBall_Step_0 @ 0x140b3fdb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oLeechBall_Step_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  code *pcVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined1 **in_stack_fffffffffffffda0;
  ulonglong uVar18;
  double local_258;
  uint local_24c;
  double local_248;
  undefined4 local_240;
  uint local_23c;
  double local_238;
  undefined4 local_230;
  uint local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  double local_1d8;
  uint local_1cc;
  double local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  longlong *local_1a0;
  undefined4 local_194;
  longlong *local_190;
  undefined4 local_184;
  longlong *local_180;
  undefined4 local_174;
  longlong *local_170;
  undefined4 local_164;
  longlong *local_160;
  undefined4 local_154;
  longlong *local_150;
  undefined4 local_144;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  
  local_res18 = 0;
  local_1b0 = "gml_Object_oLeechBall_Destroy_0";
  local_1a8 = 0;
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  pcVar15 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_138,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_23c = 0xffffff;
  local_248 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_24c = 0xffffff;
  local_258 = 0.0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  iVar8 = 4;
  do {
    iVar8 = iVar8 + -1;
    local_1a8 = 4;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    local_194 = 6;
    local_1a0 = local_res8;
    uVar18 = (ulonglong)in_stack_fffffffffffffda0 & 0xffffffffffffff00;
    uVar16 = (ulonglong)pcVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_1a0,DAT_1419fe0e8,0x80000000,&local_238,uVar16,uVar18);
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    local_184 = 6;
    local_190 = local_res8;
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(&local_190,DAT_1419fe158,0x80000000,&local_248,uVar16,uVar18 & 0xffffffffffffff00)
    ;
    uVar17 = (undefined4)(uVar16 >> 0x20);
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    uVar9 = FUN_140e794b0(0,0);
    uStack_1ec = local_22c;
    uStack_1f0 = local_230;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) == 0) {
      local_1f8 = local_238;
    }
    else {
      FUN_1400419b0(&local_1f8,&local_238);
    }
    local_res18 = 1;
    FUN_140162c50(&local_1f8,uVar9);
    local_218 = (undefined4)local_1f8;
    uStack_214 = local_1f8._4_4_;
    uStack_210 = uStack_1f0;
    uStack_20c = uStack_1ec;
    if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_218);
    local_res18 = 0;
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_e8 = local_138;
    uVar9 = FUN_140e794b0(0,0);
    uStack_1dc = local_23c;
    uStack_1e0 = local_240;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_248;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_248);
    }
    local_res18 = 2;
    FUN_140162c50(&local_1e8,uVar9);
    local_218 = (undefined4)local_1e8;
    uStack_214 = local_1e8._4_4_;
    uStack_210 = uStack_1e0;
    uStack_20c = uStack_1dc;
    if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_218);
    local_res18 = 0;
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_e0 = local_128;
    local_218 = _DAT_141dd9a48;
    uStack_214 = uRam0000000141dd9a4c;
    uStack_210 = uRam0000000141dd9a50;
    uStack_20c = DAT_141dd9a54;
    if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_218);
    local_d8 = local_118;
    uStack_ec = 0xf;
    local_f8 = 0x1000000000000c3;
    local_218 = 0xc3;
    uStack_214 = 0x1000000;
    uStack_210 = uStack_f0;
    uStack_20c = 0xf;
    if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_218);
    local_d0 = local_108;
    in_stack_fffffffffffffda0 = &local_e8;
    pcVar15 = (code *)CONCAT44(uVar17,DAT_141a0a7c8);
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_228,4,pcVar15,in_stack_fffffffffffffda0);
    iVar2 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar3);
    if (0 < iVar2) {
      do {
        local_1a8 = 6;
        local_174 = 6;
        local_180 = local_res8;
        uVar18 = (ulonglong)in_stack_fffffffffffffda0 & 0xffffffffffffff00;
        uVar16 = (ulonglong)pcVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_180,DAT_1419fe0e8,0x80000000,&local_238,uVar16,uVar18);
        if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_180);
        }
        local_164 = 6;
        local_170 = local_res8;
        uVar18 = uVar18 & 0xffffffffffffff00;
        uVar16 = uVar16 & 0xffffffffffffff00;
        FUN_140e87440(&local_170,DAT_1419fe158,0x80000000,&local_248,uVar16,uVar18);
        if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_170);
        }
        local_154 = 6;
        local_160 = local_res10;
        uVar18 = uVar18 & 0xffffffffffffff00;
        uVar16 = uVar16 & 0xffffffffffffff00;
        FUN_140e87440(&local_160,DAT_1419fe0e8,0x80000000,&local_1c8,uVar16,uVar18);
        if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_160);
        }
        local_144 = 6;
        local_150 = local_res10;
        in_stack_fffffffffffffda0 = (undefined1 **)(uVar18 & 0xffffffffffffff00);
        pcVar15 = (code *)(uVar16 & 0xffffffffffffff00);
        FUN_140e87440(&local_150,DAT_1419fe158,0x80000000,&local_1d8,pcVar15,
                      in_stack_fffffffffffffda0);
        if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_150);
        }
        dVar14 = local_1d8;
        if ((local_1cc & 0xffffff) != 0) {
          dVar14 = (double)FUN_140e4b060(&local_1d8);
        }
        dVar11 = local_1c8;
        if ((local_1bc & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_1c8);
        }
        dVar12 = local_248;
        if ((local_23c & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_248);
        }
        dVar13 = local_238;
        if ((local_22c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_238);
        }
        fVar10 = (float)FUN_140e793d0((float)dVar13,(float)dVar12,(float)dVar11,(float)dVar14);
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_24c = 0;
        local_258 = (double)fVar10;
        local_1a8 = 8;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar14 = local_258;
        if ((local_24c & 0xffffff) != 0) {
          dVar14 = (double)FUN_140e4b060(&local_258);
        }
        fVar10 = (float)FUN_140e78f90(0x40400000,(float)dVar14);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
        *pdVar4 = (double)fVar10;
        local_1a8 = 9;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar14 = local_258;
        if ((local_24c & 0xffffff) != 0) {
          dVar14 = (double)FUN_140e4b060(&local_258);
        }
        fVar10 = (float)FUN_140e79010(0x40400000,(float)dVar14);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
        *pdVar4 = (double)fVar10;
        local_1a8 = 0xb;
        puVar5 = (undefined4 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f0d0);
        puVar6 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
        FUN_140e609c0(local_res8);
        if (puVar5 != puVar6) {
          local_218 = *puVar5;
          uStack_214 = puVar5[1];
          uStack_210 = puVar5[2];
          uStack_20c = puVar5[3];
          if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_218);
        }
        FUN_140e60910(1);
        local_1a8 = 0xd;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
        uVar3 = FUN_140e79480(0);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = uVar3;
        local_1a8 = 0xe;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_1fc = 0;
        local_208 = 0x4010000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_208);
        cVar1 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_c8,&local_res8,&local_res10);
    if (local_b8 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar8);
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return;
}

