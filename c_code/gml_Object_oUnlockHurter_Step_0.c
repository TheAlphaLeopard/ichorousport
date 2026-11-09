// gml_Object_oUnlockHurter_Step_0 @ 0x140e1e5c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oUnlockHurter_Step_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  byte bVar11;
  byte local_res20;
  code *pcVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffe00;
  longlong **pplVar14;
  ulonglong uVar15;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong local_1c8;
  byte local_1bc;
  longlong local_1b8;
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  longlong local_180;
  undefined4 local_178;
  undefined4 local_174;
  longlong *local_170;
  longlong *local_168;
  undefined1 *local_160;
  longlong local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined4 local_fc;
  longlong local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_190 = "gml_Object_oUIManager_Draw_64";
  local_188 = 0;
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1c8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef568);
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  bVar11 = 0xff;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_res20 = 0xff;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_188 = 3;
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 == '\0') {
    local_188 = 4;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff408);
    FUN_140e87440(uVar5,DAT_141a05028,0x80000000,&local_58,(ulonglong)pcVar12 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe00 & 0xffffffffffffff00);
    uVar5 = FUN_140069500(uVar5);
    pcVar12 = (code *)&local_58;
    FUN_140e63610(uVar5,param_2,&local_1d8,0,pcVar12,0);
  }
  uVar13 = (undefined4)((ulonglong)pcVar12 >> 0x20);
  local_188 = 6;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uStack_1ec = 0xf;
  local_1f8 = 0x1000000000000ee;
  local_1e8 = 0x1000000000000ee;
  uStack_1e0 = uStack_1f0;
  uStack_1dc = 0xf;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1e8);
  local_170 = &local_1c8;
  pplVar14 = &local_170;
  uVar10 = CONCAT44(uVar13,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar10,pplVar14);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    uStack_1dc = 0xf;
    local_1e8 = 0x100000000000058;
    uVar15 = (ulonglong)pplVar14 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_141a57ab0,0x80000000,&local_68,uVar10,uVar15);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    cVar2 = FUN_140e491e0(&local_68);
    if ((cVar2 != '\0') && (cVar2 = FUN_140e491e0(uVar4), cVar2 == '\0')) {
      local_188 = 9;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8238);
      FUN_140e87440(uVar4,DAT_141a05028,0x80000000,&local_78,uVar10 & 0xffffffffffffff00,
                    uVar15 & 0xffffffffffffff00);
      uVar4 = FUN_140069500(uVar4);
      puVar7 = &local_78;
      FUN_140e63610(uVar4,param_2,&local_1d8,0,puVar7,0);
      uVar13 = (undefined4)((ulonglong)puVar7 >> 0x20);
      local_188 = 0xb;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      uStack_1ec = 0xf;
      local_1f8 = 0x10000000000010a;
      local_1e8 = 0x10000000000010a;
      uStack_1e0 = uStack_1f0;
      uStack_1dc = 0xf;
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_1e8);
      local_170 = &local_1c8;
      uVar5 = CONCAT44(uVar13,DAT_141a02ef8);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar5,&local_170);
      uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
      cVar2 = FUN_140e491e0(uVar4);
      if (cVar2 == '\0') {
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        uStack_1ec = 0xf;
        local_1f8 = 0x100000000000079;
        local_1e8 = 0x100000000000079;
        uStack_1e0 = uStack_1f0;
        uStack_1dc = 0xf;
        if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_1e8);
        local_168 = &local_1b8;
        pplVar14 = &local_168;
        uVar10 = CONCAT44(uVar13,DAT_141a02ef8);
        uVar4 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar10,pplVar14);
        cVar2 = FUN_140e491e0(uVar4);
        if (cVar2 == '\0') {
          bVar11 = 0;
          uStack_9c = 0;
          local_a8 = 0x4028000000000000;
          local_res20 = 0;
          uStack_10c = 0;
          local_118 = 0x4028000000000000;
          local_188 = 0x10;
          plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03328);
          FUN_140e609c0(param_1);
          if (&local_a8 != plVar6) {
            local_1f8 = local_a8;
            uStack_1f0 = uStack_a0;
            uStack_1ec = uStack_9c;
            if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(plVar6);
            }
            FUN_140041b80(plVar6,&local_1f8);
          }
          FUN_140e60910(1);
          local_188 = 0x11;
          plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdce8);
          FUN_140e609c0(param_1);
          if (&local_118 != plVar6) {
            local_1f8 = local_118;
            uStack_1f0 = uStack_110;
            uStack_1ec = uStack_10c;
            if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(plVar6);
            }
            FUN_140041b80(plVar6,&local_1f8);
          }
          FUN_140e60910(1);
          local_188 = 0x13;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fec78);
          cVar2 = FUN_140e491e0(uVar4);
          if (cVar2 == '\0') {
            local_188 = 0x29;
            puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdce8);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar7);
            }
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            *puVar7 = 0xc024000000000000;
          }
          else {
            local_188 = 0x15;
            if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            uVar13 = (undefined4)(uVar10 >> 0x20);
            local_1d8 = 0;
            local_1d0 = 0;
            local_1cc = 5;
            uStack_1ec = 0xf;
            local_1f8 = 0x1000000000000ee;
            local_1e8 = 0x1000000000000ee;
            uStack_1e0 = uStack_1f0;
            uStack_1dc = 0xf;
            if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            FUN_140041b80(&local_1c8,&local_1e8);
            local_170 = &local_1c8;
            pplVar14 = &local_170;
            uVar10 = CONCAT44(uVar13,DAT_141a02ef8);
            uVar4 = FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar10,pplVar14);
            cVar2 = FUN_140e491e0(uVar4);
            if (cVar2 == '\0') {
              local_188 = 0x21;
              plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03068);
              uStack_1dc = 0xf;
              local_1e8 = 0x100000000000106;
              uVar15 = (ulonglong)pplVar14 & 0xffffffffffffff00;
              uVar10 = uVar10 & 0xffffffffffffff00;
              FUN_140e87440(&local_1e8,DAT_1419fd8e8,0x80000000,&local_e8,uVar10,uVar15);
              if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              uVar15 = uVar15 & 0xffffffffffffff00;
              uVar10 = uVar10 & 0xffffffffffffff00;
              FUN_140e87440(&local_e8,DAT_1419f5a58,0x80000000,&local_138,uVar10,uVar15);
              FUN_140e609c0(param_1);
              if (&local_138 != plVar6) {
                local_1f8 = local_138;
                uStack_1f0 = uStack_130;
                uStack_1ec = uStack_12c;
                if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(plVar6);
                }
                FUN_140041b80(plVar6,&local_1f8);
              }
              FUN_140e60910(1);
              local_188 = 0x22;
              plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03358);
              uStack_1dc = 0xf;
              local_1e8 = 0x100000000000106;
              uVar15 = uVar15 & 0xffffffffffffff00;
              uVar10 = uVar10 & 0xffffffffffffff00;
              FUN_140e87440(&local_1e8,DAT_1419fd8e8,0x80000000,&local_e8,uVar10,uVar15);
              if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              FUN_140e87440(&local_e8,DAT_1419f5a58,0x80000000,&local_138,
                            uVar10 & 0xffffffffffffff00,uVar15 & 0xffffffffffffff00);
              FUN_140e609c0(param_1);
              if (&local_138 != plVar6) {
                local_1f8 = local_138;
                uStack_1f0 = uStack_130;
                uStack_1ec = uStack_12c;
                if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(plVar6);
                }
                FUN_140041b80(plVar6,&local_1f8);
              }
              FUN_140e60910(1);
              local_188 = 0x23;
              puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdc68);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
              *puVar7 = 0;
            }
            else {
              local_188 = 0x17;
              plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))();
              uStack_1dc = 0xf;
              local_1e8 = 0x1000000000000ee;
              uVar15 = (ulonglong)pplVar14 & 0xffffffffffffff00;
              uVar10 = uVar10 & 0xffffffffffffff00;
              FUN_140e87440(&local_1e8,DAT_141a1f090,0x80000000,&local_128,uVar10,uVar15);
              if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              FUN_140e609c0(param_1);
              if (&local_128 != plVar6) {
                local_1f8 = local_128;
                uStack_1f0 = uStack_120;
                uStack_1ec = uStack_11c;
                if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(plVar6);
                }
                FUN_140041b80(plVar6,&local_1f8);
              }
              FUN_140e60910(1);
              local_188 = 0x18;
              if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1d8);
              }
              local_1d8 = 0;
              local_1d0 = 0;
              local_1cc = 5;
              plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03358);
              puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03358);
              uStack_1dc = 0xf;
              local_1e8 = 0x1000000000000ee;
              uVar10 = uVar10 & 0xffffffffffffff00;
              FUN_140e87440(&local_1e8,DAT_141a1f090,0x80000000,&local_128,uVar10,
                            uVar15 & 0xffffffffffffff00);
              uVar13 = (undefined4)(uVar10 >> 0x20);
              if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              if (plVar6 != &local_1c8) {
                local_1f8 = *plVar6;
                uStack_1f0 = (undefined4)plVar6[1];
                uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
                if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1c8);
                }
                FUN_140041b80(&local_1c8,&local_1f8);
              }
              local_170 = &local_1c8;
              local_1f8 = local_128;
              uStack_1f0 = uStack_120;
              uStack_1ec = uStack_11c;
              if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              FUN_140041b80(&local_1b8,&local_1f8);
              local_168 = &local_1b8;
              local_1f8 = CONCAT44(uRam00000001419ee944,_DAT_1419ee940);
              uStack_1f0 = uRam00000001419ee948;
              uStack_1ec = uRam00000001419ee94c;
              if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1a8);
              }
              FUN_140041b80(local_1a8,&local_1f8);
              local_160 = local_1a8;
              FUN_140e609c0(param_1);
              pplVar14 = &local_170;
              uVar10 = CONCAT44(uVar13,DAT_141a00c58);
              puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1d8,3,uVar10,pplVar14);
              if (puVar8 != puVar7) {
                local_1f8 = *puVar8;
                uStack_1f0 = *(undefined4 *)(puVar8 + 1);
                uStack_1ec = *(undefined4 *)((longlong)puVar8 + 0xc);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar7);
                }
                FUN_140041b80(puVar7,&local_1f8);
              }
              FUN_140e60910(1);
              local_188 = 0x19;
              if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1d8);
              }
              local_1d8 = 0;
              local_1d0 = 0;
              local_1cc = 5;
              plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdc68);
              plVar9 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdc68);
              uStack_1dc = 0xf;
              local_1e8 = 0x100000000000106;
              uVar10 = uVar10 & 0xffffffffffffff00;
              FUN_140e87440(&local_1e8,DAT_1419ffbe8,0x80000000,&local_88,uVar10,
                            (ulonglong)pplVar14 & 0xffffffffffffff00);
              uVar13 = (undefined4)(uVar10 >> 0x20);
              if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              if (plVar6 != &local_1c8) {
                local_1f8 = *plVar6;
                uStack_1f0 = (undefined4)plVar6[1];
                uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
                if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1c8);
                }
                FUN_140041b80(&local_1c8,&local_1f8);
              }
              local_170 = &local_1c8;
              local_1f8 = local_88;
              uStack_1f0 = uStack_80;
              uStack_1ec = uStack_7c;
              if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              FUN_140041b80(&local_1b8,&local_1f8);
              local_168 = &local_1b8;
              local_1f8 = CONCAT44(uRam00000001419ee954,_DAT_1419ee950);
              uStack_1f0 = uRam00000001419ee958;
              uStack_1ec = uRam00000001419ee95c;
              if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1a8);
              }
              FUN_140041b80(local_1a8,&local_1f8);
              local_160 = local_1a8;
              FUN_140e609c0(param_1);
              pplVar14 = &local_170;
              uVar10 = CONCAT44(uVar13,DAT_141a00c58);
              plVar6 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1d8,3,uVar10,pplVar14);
              if (plVar6 != plVar9) {
                local_1f8 = *plVar6;
                uStack_1f0 = (undefined4)plVar6[1];
                uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
                if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(plVar9);
                }
                FUN_140041b80(plVar9,&local_1f8);
              }
              FUN_140e60910(1);
              local_188 = 0x1b;
              plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff9c8);
              uStack_1dc = 0xf;
              local_1e8 = 0x1000000000000ee;
              uVar15 = (ulonglong)pplVar14 & 0xffffffffffffff00;
              uVar10 = uVar10 & 0xffffffffffffff00;
              FUN_140e87440(&local_1e8,DAT_1419ff9c8,0x80000000,&local_b8,uVar10,uVar15);
              if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              FUN_140e609c0(param_1);
              if (&local_b8 != plVar6) {
                local_1f8 = local_b8;
                uStack_1f0 = uStack_b0;
                uStack_1ec = uStack_ac;
                if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(plVar6);
                }
                FUN_140041b80(plVar6,&local_1f8);
              }
              FUN_140e60910(1);
              local_188 = 0x1c;
              plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ffcc8);
              uStack_1dc = 0xf;
              local_1e8 = 0x1000000000000ee;
              uVar15 = uVar15 & 0xffffffffffffff00;
              uVar10 = uVar10 & 0xffffffffffffff00;
              FUN_140e87440(&local_1e8,DAT_1419ffcc8,0x80000000,&local_c8,uVar10,uVar15);
              if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              FUN_140e609c0(param_1);
              if (&local_c8 != plVar6) {
                local_1f8 = local_c8;
                uStack_1f0 = uStack_c0;
                uStack_1ec = uStack_bc;
                if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(plVar6);
                }
                FUN_140041b80(plVar6,&local_1f8);
              }
              FUN_140e60910(1);
              local_188 = 0x1d;
              plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8988);
              uStack_1dc = 0xf;
              local_1e8 = 0x1000000000000ee;
              FUN_140e87440(&local_1e8,DAT_1419f8988,0x80000000,&local_d8,
                            uVar10 & 0xffffffffffffff00,uVar15 & 0xffffffffffffff00);
              if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              FUN_140e609c0(param_1);
              if (&local_d8 != plVar6) {
                local_1f8 = local_d8;
                uStack_1f0 = uStack_d0;
                uStack_1ec = uStack_cc;
                if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(plVar6);
                }
                FUN_140041b80(plVar6,&local_1f8);
              }
              FUN_140e60910(1);
            }
            local_188 = 0x26;
            if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_1d8 = 0;
            local_1d0 = 0;
            local_1cc = 5;
            uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03498);
            plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03328);
            plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdce8);
            if (plVar6 != &local_1c8) {
              local_1f8 = *plVar6;
              uStack_1f0 = (undefined4)plVar6[1];
              uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
              if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1c8);
              }
              FUN_140041b80(&local_1c8,&local_1f8);
            }
            local_170 = &local_1c8;
            if (plVar9 != &local_1b8) {
              local_1f8 = *plVar9;
              uStack_1f0 = (undefined4)plVar9[1];
              uStack_1ec = *(undefined4 *)((longlong)plVar9 + 0xc);
              if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              FUN_140041b80(&local_1b8,&local_1f8);
            }
            local_168 = &local_1b8;
            pplVar14 = &local_170;
            FUN_140e63610(param_1,param_2,&local_1d8,2,uVar10,pplVar14);
          }
          local_188 = 0x2b;
          uStack_1dc = 0xf;
          local_1e8 = 0x100000000000106;
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_1e8,DAT_1419f5998,0x80000000,&local_98,uVar10,
                        (ulonglong)pplVar14 & 0xffffffffffffff00);
          uVar13 = (undefined4)(uVar10 >> 0x20);
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          uStack_1dc = 0;
          local_1e8 = 0x4026000000000000;
          iVar3 = FUN_140e851f0(&local_98,&local_1e8,DAT_141955260,1);
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          if (0 < iVar3) {
            local_188 = 0x2d;
            puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eedc8);
            FUN_140e609c0(param_1);
            puVar8 = (undefined8 *)FUN_140e48e40(puVar7,0);
            FUN_140e609c0(*(undefined8 *)*puVar7);
            uVar4 = FUN_140e78f40(0xffffffffffffffff,1);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar8);
            }
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
            *puVar8 = uVar4;
            FUN_140e60910(2);
          }
          local_188 = 0x2f;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1d8 = 0;
          local_1d0 = 0;
          local_1cc = 5;
          plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419eedc8);
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eedc8);
          if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)
             ) {
            if (*(int *)(lVar1 + 0x24) < 2) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
            plVar9 = plVar6;
          }
          if (plVar9 != &local_1c8) {
            local_1f8 = *plVar9;
            uStack_1f0 = (undefined4)plVar9[1];
            uStack_1ec = *(undefined4 *)((longlong)plVar9 + 0xc);
            if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            FUN_140041b80(&local_1c8,&local_1f8);
          }
          local_170 = &local_1c8;
          local_1f8 = CONCAT44(uRam0000000141dc79b4,_DAT_141dc79b0);
          uStack_1f0 = uRam0000000141dc79b8;
          uStack_1ec = uRam0000000141dc79bc;
          if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          FUN_140041b80(&local_1b8,&local_1f8);
          local_168 = &local_1b8;
          local_1f8 = CONCAT44(uRam00000001419ee934,_DAT_1419ee930);
          uStack_1f0 = uRam00000001419ee938;
          uStack_1ec = uRam00000001419ee93c;
          if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1a8);
          }
          FUN_140041b80(local_1a8,&local_1f8);
          local_160 = local_1a8;
          FUN_140e609c0(param_1);
          puVar8 = (undefined8 *)FUN_140e48e40(puVar7,1);
          FUN_140e609c0(*(undefined8 *)*puVar7);
          puVar7 = (undefined8 *)
                   FUN_140e634e0(param_1,param_2,&local_1d8,3,CONCAT44(uVar13,DAT_141a00c58),
                                 &local_170);
          if (puVar7 != puVar8) {
            local_1f8 = *puVar7;
            uStack_1f0 = *(undefined4 *)(puVar7 + 1);
            uStack_1ec = *(undefined4 *)((longlong)puVar7 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar8);
            }
            FUN_140041b80(puVar8,&local_1f8);
          }
          FUN_140e60910(2);
          local_188 = 0x31;
          plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419eedc8);
          if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)
             ) {
            if (*(int *)(lVar1 + 0x24) < 1) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = *(longlong **)(lVar1 + 8);
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          local_174 = *(undefined4 *)((longlong)plVar9 + 0xc);
          local_178 = (undefined4)plVar9[1];
          if ((1 << ((byte)local_174 & 0x1f) & 0x46U) == 0) {
            local_180 = *plVar9;
          }
          else {
            FUN_1400419b0(&local_180,plVar9);
          }
          uStack_1ec = 7;
          local_1f8 = CONCAT44(local_1f8._4_4_,0x1e0);
          FUN_1400460e0(&local_180,&local_1f8);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_14c = local_174;
          local_150 = local_178;
          if ((1 << ((byte)local_174 & 0x1f) & 0x46U) == 0) {
            local_158 = local_180;
          }
          else {
            FUN_1400419b0(&local_158,&local_180);
          }
          uStack_1ec = 7;
          local_1f8 = CONCAT44(local_1f8._4_4_,0x14);
          FUN_1400462a0(&local_158,&local_1f8);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          uStack_1dc = local_14c;
          uStack_1e0 = local_150;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
            local_1e8 = local_158;
          }
          else {
            FUN_1400419b0(&local_1e8,&local_158);
          }
          uStack_1ec = 7;
          local_1f8 = CONCAT44(local_1f8._4_4_,8);
          FUN_1400462a0(&local_1e8,&local_1f8);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_1f8 = local_1e8;
          uStack_1f0 = uStack_1e0;
          uStack_1ec = uStack_1dc;
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_1f8);
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_180);
          }
          local_188 = 0x32;
          local_174 = 0;
          local_178 = uStack_110;
          local_180 = local_118;
          uStack_1ec = 7;
          local_1f8 = CONCAT44(local_1f8._4_4_,0xc);
          FUN_1400460e0(&local_180,&local_1f8);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)
             ) {
            if (*(int *)(lVar1 + 0x24) < 2) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          uStack_1dc = local_174;
          uStack_1e0 = local_178;
          if ((1 << ((byte)local_174 & 0x1f) & 0x46U) == 0) {
            local_1e8 = local_180;
          }
          else {
            FUN_1400419b0(&local_1e8,&local_180);
          }
          FUN_1400460e0(&local_1e8,plVar6);
          local_1f8 = local_1e8;
          uStack_1f0 = uStack_1e0;
          uStack_1ec = uStack_1dc;
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_1f8);
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_180);
          }
          local_188 = 0x34;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1d8 = 0;
          local_1d0 = 0;
          local_1cc = 5;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03448);
          local_170 = &local_f8;
          local_168 = &local_108;
          FUN_140e63610(param_1,param_2,&local_1d8,2,uVar4,&local_170);
        }
      }
      goto LAB_140e1fd78;
    }
  }
  local_188 = 7;
LAB_140e1fd78:
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << (local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << (bVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_1c8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return;
}

