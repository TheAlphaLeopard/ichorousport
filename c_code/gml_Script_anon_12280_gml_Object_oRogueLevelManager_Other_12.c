// gml_Script_anon_12280_gml_Object_oRogueLevelManager_Other_12 @ 0x140d0da20

undefined8 *
gml_Script_anon_12280_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  double dVar10;
  longlong *local_res8;
  ulonglong local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  undefined4 uVar12;
  ulonglong uVar11;
  ulonglong uVar13;
  longlong local_2c8;
  longlong lStack_2c0;
  double local_2b8;
  uint local_2ac;
  longlong local_2a8;
  undefined4 local_29c;
  longlong local_298;
  undefined4 local_28c;
  undefined8 local_288;
  char *local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined4 local_268;
  uint local_264;
  undefined8 local_260;
  undefined4 local_258;
  uint local_254;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined1 *local_240;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_204;
  longlong local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  longlong local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 local_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 local_d0 [16];
  longlong local_c0;
  undefined1 local_b0 [16];
  longlong local_a0;
  
  local_res20 = 0;
  local_280 = "gml_Script_anon@11708@gml_Object_oRogueLevelManager_Other_12";
  local_288 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_288;
  local_278 = 0x197;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_128,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_28c = 0xffffff;
  local_298 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  uStack_1dc = 0xffffff;
  local_1e8 = 0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_224 = 0xffffff;
  local_230 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_234 = 0xffffff;
  local_240 = (undefined1 *)0x0;
  local_244 = 0;
  local_250 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_278 = 0x198;
  local_2ac = 0;
  local_2b8 = 0.0;
  bVar2 = true;
  do {
    iVar5 = 0;
    if (!bVar2) {
      local_278 = 0x198;
      uVar4 = local_2ac & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_2b8 = (double)CONCAT44(local_2b8._4_4_,local_2b8._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_2b8 = (double)((longlong)local_2b8 + 1);
          }
          else {
            if (uVar4 == 0xd) goto LAB_140d0dc0a;
            FUN_140042910(&DAT_14172c3d8,&local_2b8,&local_2b8);
          }
          goto LAB_140d0dc18;
        }
        local_2b8 = (double)FUN_140e4b060(&local_2b8);
LAB_140d0dc0a:
        local_2ac = 0;
      }
      local_2b8 = local_2b8 + 1.0;
    }
LAB_140d0dc18:
    bVar2 = false;
    if (param_4 < 1) {
      plVar7 = &DAT_1419df7b0;
    }
    else {
      plVar7 = (longlong *)*param_5;
    }
    if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
      iVar5 = *(int *)(*plVar7 + 0x24);
    }
    local_16c = 0;
    local_178 = (double)iVar5;
    iVar5 = FUN_140e851f0(&local_2b8,&local_178,DAT_141955260,1);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (iVar5 == -2 || -1 < iVar5) {
      if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_250);
      }
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_230);
      }
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      _eh_vector_destructor_iterator_(local_128,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_288;
      return local_res18;
    }
    local_278 = 0x199;
    iVar5 = FUN_140e4a740(&local_2b8);
    if (param_4 < 1) {
      plVar7 = &DAT_1419df7b0;
    }
    else {
      plVar7 = (longlong *)*param_5;
    }
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != &local_298) {
      local_2c8 = *plVar7;
      lStack_2c0 = plVar7[1];
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      FUN_140041b80(&local_298,&local_2c8);
    }
    local_278 = 0x19a;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_29c = 0;
    local_2a8 = -0x3ff0000000000000;
    local_278 = 0x19b;
    local_15c = 0xf;
    local_168 = 0x100000000000039;
    iVar5 = FUN_140e63cb0(local_b0,&local_res8,&local_res10,&local_168);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (0 < iVar5) {
      do {
        local_278 = 0x19c;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a368);
        FUN_140e87170(&local_298,DAT_1419fe0e8,0x80000000,&local_1e8,local_res8,local_res10);
        local_264 = *(uint *)((longlong)puVar6 + 0xc);
        local_268 = *(undefined4 *)(puVar6 + 1);
        if ((1 << ((byte)local_264 & 0x1f) & 0x46U) == 0) {
          local_270 = *puVar6;
        }
        else {
          FUN_1400419b0(&local_270,puVar6);
        }
        local_res20 = 1;
        FUN_1400462a0(&local_270,&local_1e8);
        if ((local_264 & 0xffffff) != 0) {
          FUN_140e4b060(&local_270);
        }
        dVar10 = (double)FUN_140e78d00();
        local_res20 = 0;
        if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_270);
        }
        if (dVar10 < 1.0) {
          puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a398);
          plVar7 = local_res8;
          uVar13 = local_res10;
          FUN_140e87170(&local_298,DAT_1419fe158,0x80000000,&local_1f8,local_res8,local_res10);
          local_254 = *(uint *)((longlong)puVar6 + 0xc);
          local_258 = *(undefined4 *)(puVar6 + 1);
          if ((1 << ((byte)local_254 & 0x1f) & 0x46U) == 0) {
            local_260 = *puVar6;
          }
          else {
            FUN_1400419b0(&local_260,puVar6);
          }
          local_res20 = 2;
          FUN_1400462a0(&local_260,&local_1f8);
          if ((local_254 & 0xffffff) != 0) {
            FUN_140e4b060(&local_260);
          }
          dVar10 = (double)FUN_140e78d00();
          local_res20 = 0;
          if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_260);
          }
          if (dVar10 < 1.0) {
            local_278 = 0x19c;
            local_14c = 6;
            local_158 = local_res8;
            FUN_140e87440(&local_158,DAT_141a0a828,0x80000000,&local_188,
                          (ulonglong)plVar7 & 0xffffffffffffff00,uVar13 & 0xffffffffffffff00);
            if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_158);
            }
            lStack_2c0 = CONCAT44(uStack_17c,uStack_180);
            local_2c8 = local_188;
            if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            FUN_140041b80(&local_2a8,&local_2c8);
            break;
          }
        }
        cVar3 = FUN_140e643f0(local_b0,&local_res8,&local_res10);
      } while (cVar3 != '\0');
    }
    FUN_140e63970(local_b0,&local_res8,&local_res10);
    local_278 = 0x19e;
    local_13c = 0;
    local_148 = 0xc010000000000000;
    iVar5 = FUN_140e851f0(&local_2a8,&local_148,DAT_141955260,0);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if (iVar5 == 0) {
      local_278 = 0x19e;
      if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_250);
      }
      local_250 = 0;
      local_248 = 0;
      local_244 = 5;
      FUN_140e87170(&local_298,DAT_1419fe0e8,0x80000000,&local_1e8,local_res8,local_res10);
      plVar7 = local_res8;
      FUN_140e87170(&local_298,DAT_1419fe158,0x80000000,&local_1f8,local_res8,local_res10);
      uVar12 = (undefined4)((ulonglong)plVar7 >> 0x20);
      lStack_2c0 = CONCAT44(uStack_1dc,uStack_1e0);
      local_2c8 = local_1e8;
      if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_2c8);
      local_e8 = local_128;
      lStack_2c0 = CONCAT44(uStack_1ec,uStack_1f0);
      local_2c8 = local_1f8;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_2c8);
      local_e0 = local_118;
      uStack_ec = 0xf;
      local_f8 = 0x1000000000000d4;
      lStack_2c0 = CONCAT44(0xf,uStack_f0);
      local_2c8 = 0x1000000000000d4;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_2c8);
      local_d8 = local_108;
      plVar7 = (longlong *)
               FUN_140e634e0(local_res8,local_res10,&local_250,3,CONCAT44(uVar12,DAT_141a1f460),
                             &local_e8);
      if (plVar7 != &local_2a8) {
        local_2c8 = *plVar7;
        lStack_2c0 = plVar7[1];
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140041b80(&local_2a8,&local_2c8);
      }
    }
    local_278 = 0x19f;
    iVar5 = FUN_140e63cb0(local_d0,&local_res8,&local_res10,&local_2a8);
    if (0 < iVar5) {
      do {
        local_278 = 0x1a0;
        FUN_140e87170(&local_298,DAT_141a0a728,0x80000000,&local_198,local_res8,local_res10);
        lStack_2c0 = CONCAT44(uStack_18c,uStack_190);
        local_2c8 = local_198;
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        FUN_140041b80(&local_210,&local_2c8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_210);
        local_278 = 0x1a1;
        plVar7 = local_res8;
        uVar13 = local_res10;
        FUN_140e87170(&local_298,DAT_141a0cfc8,0x80000000,&local_1a8,local_res8,local_res10);
        lStack_2c0 = CONCAT44(uStack_19c,uStack_1a0);
        local_2c8 = local_1a8;
        if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_220);
        }
        FUN_140041b80(&local_220,&local_2c8);
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_220);
        local_278 = 0x1a2;
        if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_230);
        }
        local_224 = 0;
        local_230 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_230);
        local_278 = 0x1a3;
        plVar8 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
        uVar13 = uVar13 & 0xffffffffffffff00;
        uVar11 = (ulonglong)plVar7 & 0xffffffffffffff00;
        FUN_140e87440(&local_298,DAT_141a0a748,0x80000000,&local_1c8,uVar11,uVar13);
        FUN_140e609c0(local_res8);
        if (&local_1c8 != plVar8) {
          lStack_2c0 = CONCAT44(uStack_1bc,uStack_1c0);
          local_2c8 = local_1c8;
          if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(plVar8);
          }
          FUN_140041b80(plVar8,&local_2c8);
        }
        FUN_140e60910(1);
        plVar7 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
        uVar13 = uVar13 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_298,DAT_141a0a858,0x80000000,&local_1d8,uVar11,uVar13);
        FUN_140e609c0(local_res8);
        if (&local_1d8 != plVar7) {
          lStack_2c0 = CONCAT44(uStack_1cc,uStack_1d0);
          local_2c8 = local_1d8;
          if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(plVar7);
          }
          FUN_140041b80(plVar7,&local_2c8);
        }
        FUN_140e60910(1);
        local_278 = 0x1a4;
        uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a158);
        local_12c = 6;
        local_138 = local_res8;
        FUN_140e87440(&local_138,DAT_141a0a728,0x80000000,&local_1b8,uVar11 & 0xffffffffffffff00,
                      uVar13 & 0xffffffffffffff00);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        iVar5 = FUN_140e851f0(&local_1b8,uVar9,DAT_141955260,0);
        if (iVar5 != 0) {
          local_278 = 0x1a4;
          if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_240);
          }
          local_234 = 0;
          local_240 = &DAT_bff0000000000000;
          FUN_140e86fa0(local_res8,DAT_141a0a7e8,2,&local_240);
        }
        cVar3 = FUN_140e643f0(local_d0,&local_res8,&local_res10);
      } while (cVar3 != '\0');
    }
    FUN_140e63970(local_d0,&local_res8,&local_res10);
    if (local_c0 != 0) {
      FUN_140e4cd60();
      local_c0 = 0;
    }
    if (local_a0 != 0) {
      FUN_140e4cd60();
    }
  } while( true );
}

