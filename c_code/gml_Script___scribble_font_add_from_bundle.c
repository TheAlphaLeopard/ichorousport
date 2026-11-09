// gml_Script___scribble_font_add_from_bundle @ 0x14017a2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___scribble_font_add_from_bundle
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 uVar12;
  longlong **pplVar11;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  double local_198;
  uint local_18c;
  double local_188;
  uint local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_144;
  uint local_140;
  longlong local_138;
  undefined4 local_12c;
  longlong *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  longlong local_110;
  undefined4 local_104;
  longlong local_100;
  uint uStack_f4;
  longlong local_f0;
  uint uStack_e4;
  uint local_e0;
  int local_dc;
  longlong local_d8 [2];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_160 = "gml_Script___scribble_font_add_all_from_bundle";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 3;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(local_d8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_140 = 0xffffff;
  uStack_e4 = 0xffffff;
  local_f0 = 0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  uVar9 = 0xffffff;
  uStack_f4 = 0xffffff;
  lVar10 = 0;
  local_100 = 0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 6;
  local_88 = _DAT_1419e1f00;
  uStack_84 = uRam00000001419e1f04;
  uStack_80 = uRam00000001419e1f08;
  uStack_7c = uRam00000001419e1f0c;
  if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_88);
  pplVar11 = (longlong **)CONCAT44(uVar12,DAT_141a085f8);
  local_128 = local_d8;
  plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1a8,1,pplVar11,&local_128);
  lVar8 = 0;
  uVar4 = 0xffffff;
  if (plVar5 != &local_f0) {
    local_88 = (undefined4)*plVar5;
    uStack_84 = *(undefined4 *)((longlong)plVar5 + 4);
    uStack_80 = (undefined4)plVar5[1];
    uStack_7c = *(undefined4 *)((longlong)plVar5 + 0xc);
    FUN_140041b80(&local_f0,&local_88);
    local_140 = uStack_e4;
    lVar8 = local_f0;
    uVar4 = uStack_e4;
  }
  local_158 = 8;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 0;
  local_188 = 0.0;
  local_158 = 9;
  iVar2 = 0;
  if ((uVar4 == 2) && (lVar8 != 0)) {
    iVar2 = *(int *)(lVar8 + 0x24);
  }
  if (0 < iVar2) {
    local_e0 = uVar4 & 0xffffff;
    local_dc = iVar2;
    do {
      uVar12 = (undefined4)((ulonglong)pplVar11 >> 0x20);
      plVar5 = (longlong *)0x0;
      local_dc = local_dc + -1;
      local_158 = 0xb;
      iVar2 = FUN_140e4a740(&local_188);
      if ((local_e0 == 2) && (lVar8 != 0)) {
        if ((iVar2 < 0) || (*(int *)(lVar8 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(lVar8 + 0x24));
        }
        else {
          plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar8 + 8));
        }
        if (plVar5 != &local_138) goto LAB_14017a4e4;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar5 = &local_f0;
LAB_14017a4e4:
        local_178 = *plVar5;
        uStack_170 = plVar5[1];
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_178);
      }
      local_158 = 0xc;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      local_128 = &local_138;
      pplVar11 = (longlong **)CONCAT44(uVar12,DAT_141a08638);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_1a8,1,pplVar11,&local_128);
      cVar1 = FUN_140e491e0(uVar6);
      uVar12 = (undefined4)((ulonglong)pplVar11 >> 0x20);
      if (cVar1 != '\0') {
        local_158 = 0xe;
        uStack_70 = CONCAT44(0xd,(undefined4)uStack_70);
        local_78 = 0;
        local_178 = 0;
        uStack_170 = uStack_70;
        if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_150);
        }
        FUN_140041b80(&local_150,&local_178);
        local_158 = 0x10;
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_1a8 = 0;
        local_1a0 = 0;
        local_19c = 5;
        local_128 = &local_138;
        local_178 = CONCAT44(uRam00000001419e1f04,_DAT_1419e1f00);
        uStack_170 = CONCAT44(uRam00000001419e1f0c,uRam00000001419e1f08);
        if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_178);
        local_120 = local_c8;
        uVar6 = CONCAT44(uVar12,DAT_141a085d8);
        plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar6,&local_128);
        if (plVar5 != &local_100) {
          local_178 = *plVar5;
          uStack_170 = plVar5[1];
          if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_100);
          }
          FUN_140041b80(&local_100,&local_178);
          lVar10 = local_100;
          uVar9 = uStack_f4;
        }
        local_158 = 0x11;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_18c = 0;
        local_198 = 0.0;
        iVar2 = 0;
        if ((uVar9 == 2) && (lVar10 != 0)) {
          iVar2 = *(int *)(lVar10 + 0x24);
        }
        if (0 < iVar2) {
          do {
            uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
            plVar5 = (longlong *)0x0;
            iVar2 = iVar2 + -1;
            local_158 = 0x14;
            if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            local_1a8 = 0;
            local_1a0 = 0;
            local_19c = 5;
            iVar3 = FUN_140e4a740(&local_198);
            if (((uVar9 & 0xffffff) == 2) && (lVar10 != 0)) {
              if ((iVar3 < 0) || (*(int *)(lVar10 + 0x24) <= iVar3)) {
                FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                              *(undefined4 *)(lVar10 + 0x24));
              }
              else {
                plVar5 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar10 + 8));
              }
              if (plVar5 != local_d8) goto LAB_14017a78c;
            }
            else {
              FUN_140e632c0("trying to index variable that is not an array");
              plVar5 = &local_100;
LAB_14017a78c:
              local_178 = *plVar5;
              uStack_170 = plVar5[1];
              if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_d8);
              }
              FUN_140041b80(local_d8,&local_178);
            }
            local_9c = DAT_141dcbb34;
            local_a0 = DAT_141dcbb30;
            if ((1 << ((byte)DAT_141dcbb34 & 0x1f) & 0x46U) == 0) {
              local_a8 = DAT_141dcbb28;
              local_128 = local_d8;
            }
            else {
              local_128 = local_d8;
              FUN_1400419b0(&local_a8,&DAT_141dcbb28);
            }
            uVar6 = CONCAT44(uVar12,DAT_141a01298);
            uVar7 = FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar6,&local_128);
            iVar3 = FUN_140e851f0(uVar7,&local_a8,DAT_141955260,0);
            if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_a8);
            }
            uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
            if (iVar3 == 0) {
              local_158 = 0x16;
              local_68 = 0;
              uStack_64 = 0x3ff00000;
              uStack_5c = 0xd;
              local_178 = 0x3ff0000000000000;
              uStack_170 = CONCAT44(0xd,uStack_60);
              if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_150);
              }
              FUN_140041b80(&local_150,&local_178);
              break;
            }
            local_158 = 0x1a;
            uVar4 = local_18c & 0xffffff;
            if (uVar4 == 0) {
LAB_14017a8a7:
              local_198 = local_198 + 1.0;
            }
            else if (uVar4 == 1) {
              local_198 = (double)FUN_140e4b060(&local_198);
              local_198 = local_198 + 1.0;
              local_18c = 0;
            }
            else if (uVar4 == 7) {
              local_198 = (double)CONCAT44(local_198._4_4_,local_198._0_4_ + 1);
            }
            else if (uVar4 == 10) {
              local_198 = (double)((longlong)local_198 + 1);
            }
            else {
              if (uVar4 == 0xd) {
                local_18c = 0;
                goto LAB_14017a8a7;
              }
              FUN_140042910(&DAT_14172c3d8,&local_198,&local_198);
            }
            uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
          } while (0 < iVar2);
        }
        local_158 = 0x1d;
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_1a8 = 0;
        local_1a0 = 0;
        local_19c = 5;
        local_128 = &local_138;
        uVar6 = CONCAT44(uVar12,DAT_141a08608);
        plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar6,&local_128);
        uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (plVar5 != &local_110) {
          local_178 = *plVar5;
          uStack_170 = plVar5[1];
          if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_110);
          }
          FUN_140041b80(&local_110,&local_178);
        }
        local_158 = 0x1e;
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_1a8 = 0;
        local_1a0 = 0;
        local_19c = 5;
        local_128 = &local_110;
        local_178 = CONCAT44(uRam00000001419e1ef4,_DAT_1419e1ef0);
        uStack_170 = CONCAT44(uRam00000001419e1efc,uRam00000001419e1ef8);
        if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_178);
        local_120 = local_c8;
        local_178 = CONCAT44(uRam00000001419e1f14,_DAT_1419e1f10);
        uStack_170 = CONCAT44(uRam00000001419e1f1c,uRam00000001419e1f18);
        if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_178);
        local_118 = local_b8;
        local_8c = DAT_141dcbb24;
        local_90 = DAT_141dcbb20;
        if ((1 << ((byte)DAT_141dcbb24 & 0x1f) & 0x46U) == 0) {
          local_98 = DAT_141dcbb18;
        }
        else {
          FUN_1400419b0(&local_98,&DAT_141dcbb18);
        }
        pplVar11 = (longlong **)CONCAT44(uVar12,DAT_141a01268);
        uVar6 = FUN_140e634e0(param_1,param_2,&local_1a8,3,pplVar11,&local_128);
        iVar2 = FUN_140e851f0(uVar6,&local_98,DAT_141955260,0);
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        if (iVar2 == 0) {
          local_158 = 0x20;
          local_88 = 0;
          uStack_84 = 0x3ff00000;
          uStack_7c = 0xd;
          local_178 = 0x3ff0000000000000;
          uStack_170 = CONCAT44(0xd,uStack_80);
          if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_150);
          }
          FUN_140041b80(&local_150,&local_178);
        }
        local_158 = 0x23;
        cVar1 = FUN_140e491e0(&local_150);
        if (cVar1 == '\0') {
          local_158 = 0x25;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 5;
          local_128 = &local_138;
          pplVar11 = &local_128;
          gml_Script___scribble_font_add_from_info(param_1,param_2,&local_1a8,1,pplVar11);
        }
      }
      local_158 = 0x29;
      uVar4 = local_17c & 0xffffff;
      if (uVar4 == 0) {
LAB_14017ac1f:
        local_188 = local_188 + 1.0;
      }
      else {
        if (uVar4 == 1) {
          local_188 = (double)FUN_140e4b060(&local_188);
          local_17c = 0;
          goto LAB_14017ac1f;
        }
        if (uVar4 == 7) {
          local_188 = (double)CONCAT44(local_188._4_4_,local_188._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_188 = (double)((longlong)local_188 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_17c = 0;
            goto LAB_14017ac1f;
          }
          FUN_140042910(&DAT_14172c3d8,&local_188,&local_188);
        }
      }
      lVar8 = local_f0;
    } while (0 < local_dc);
    uVar4 = local_140;
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

