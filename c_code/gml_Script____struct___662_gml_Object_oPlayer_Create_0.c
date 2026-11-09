// gml_Script____struct___662_gml_Object_oPlayer_Create_0 @ 0x140c18f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___662_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  byte bVar10;
  byte bVar9;
  undefined8 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  byte local_d4;
  undefined1 local_d0 [12];
  byte local_c4;
  undefined1 local_c0 [12];
  byte local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_f0 = "gml_Script_anon@29962@___struct___662@gml_Object_oPlayer_Create_0";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x64b;
  _eh_vector_constructor_iterator_(&local_e0,0x10,3,FUN_1400424d0,FUN_140041b30);
  bVar10 = 0xff;
  bVar9 = 0xff;
  local_5c = 0xffffff;
  local_68 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  uStack_4c = 0xffffff;
  local_58 = (longlong *)0x0;
  local_10c = 0;
  local_118 = 0;
  local_a4 = 0;
  local_b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x64d;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8778);
  uVar12 = 0;
  uVar5 = FUN_140e63610(param_1,param_2,&local_118,0,uVar4,0);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_e8 = 0x650;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
    uStack_fc = 0;
    local_108 = (longlong *)0x0;
    iVar2 = FUN_140e851f0(uVar5,&local_108,DAT_141955260,0);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    uVar3 = 1 << ((byte)local_10c & 0x1f);
    bVar9 = bVar10;
    if (iVar2 == 0) {
      local_e8 = 0x658;
      if ((uVar3 & 0x46) != 0) {
        FUN_140041a50(&local_118);
      }
      local_118 = 0;
      local_110 = 0;
      local_10c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
      uVar12 = 0;
      uVar5 = FUN_140e63610(param_1,param_2,&local_118,0,uVar4,0);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 == '\0') {
        local_e8 = 0x65a;
        if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b0);
        }
        local_b0 = 0;
        local_a8 = 0;
        local_a4 = 5;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
        FUN_140e87440(uVar5,DAT_1419f7b28,0x80000000,&local_68,uVar4 & 0xffffffffffffff00,
                      uVar12 & 0xffffffffffffff00);
        local_108 = (longlong *)CONCAT44(DAT_141dda668._4_4_,(undefined4)DAT_141dda668);
        uStack_100 = DAT_141dda670;
        uStack_fc = DAT_141dda674;
        if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e0);
        }
        FUN_140041b80(&local_e0,&local_108);
        local_a0 = &local_e0;
        uVar5 = FUN_140069500(uVar5);
        ppuVar11 = &local_a0;
        puVar6 = &local_68;
        FUN_140e63610(uVar5,param_2,&local_b0,1,puVar6,ppuVar11);
        local_e8 = 0x65b;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_88,
                      (ulonglong)puVar6 & 0xffffffffffffff00,
                      (ulonglong)ppuVar11 & 0xffffffffffffff00);
        local_108 = (longlong *)CONCAT44(DAT_141dda668._4_4_,(undefined4)DAT_141dda668);
        uStack_100 = DAT_141dda670;
        uStack_fc = DAT_141dda674;
        if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e0);
        }
        FUN_140041b80(&local_e0,&local_108);
        local_a0 = &local_e0;
        uVar5 = FUN_140069500(uVar5);
        FUN_140e63610(uVar5,param_2,&local_118,1,&local_88,&local_a0);
        local_e8 = 0x65c;
      }
      else {
        local_e8 = 0x660;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8598);
        uStack_fc = 0;
        local_108 = (longlong *)0x0;
        iVar2 = FUN_140e851f0(uVar5,&local_108,DAT_141955260,1);
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        if (iVar2 < 1) {
          bVar9 = 0;
          local_3c = 0;
          local_48 = 0x3fa999999999999a;
          local_e8 = 0x669;
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          local_118 = 0;
          local_110 = 0;
          local_10c = 5;
          local_108 = (longlong *)CONCAT44(uRam00000001419ecc04,_DAT_1419ecc00);
          uStack_100 = uRam00000001419ecc08;
          uStack_fc = uRam00000001419ecc0c;
          if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e0);
          }
          FUN_140041b80(&local_e0,&local_108);
          local_a0 = &local_e0;
          local_108 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_100 = DAT_1419df7b8;
          uStack_fc = DAT_1419df7bc;
          if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d0);
          }
          FUN_140041b80(local_d0,&local_108);
          local_98 = local_d0;
          ppuVar11 = &local_a0;
          uVar5 = gml_Script_InputCheckMany(param_1,param_2,&local_118,2,ppuVar11);
          cVar1 = FUN_140e491e0(uVar5);
          if (cVar1 == '\0') {
            local_e8 = 0x66b;
            if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_b0);
            }
            local_b0 = 0;
            local_a8 = 0;
            local_a4 = 5;
            uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
            FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_88,
                          (ulonglong)ppuVar11 & 0xffffffffffffff00,uVar12 & 0xffffffffffffff00);
            local_108 = (longlong *)CONCAT44(DAT_141dda818._4_4_,(undefined4)DAT_141dda818);
            uStack_100 = DAT_141dda820;
            uStack_fc = DAT_141dda824;
            if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_c0);
            }
            FUN_140041b80(local_c0,&local_108);
            local_90 = local_c0;
            uVar5 = FUN_140069500(uVar5);
            FUN_140e63610(uVar5,param_2,&local_b0,1,&local_88,&local_90);
            local_e8 = 0x66c;
          }
          else {
            local_e8 = 0x66f;
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            local_118 = 0;
            local_110 = 0;
            local_10c = 5;
            local_108 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_100 = DAT_1419df7b8;
            uStack_fc = DAT_1419df7bc;
            if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e0);
            }
            FUN_140041b80(&local_e0,&local_108);
            local_a0 = &local_e0;
            local_108 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_100 = DAT_1419df7b8;
            uStack_fc = DAT_1419df7bc;
            if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_d0);
            }
            FUN_140041b80(local_d0,&local_108);
            local_98 = local_d0;
            uVar5 = gml_Script_animcurve_lerp(param_1,param_2,&local_118,2,&local_a0);
            cVar1 = FUN_140e491e0(uVar5);
            if (cVar1 != '\0') {
              local_e8 = 0x671;
              if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_78);
              }
              local_6c = 0;
              local_78 = 0;
              FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_78);
            }
            local_e8 = 0x674;
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            local_118 = 0;
            local_110 = 0;
            local_10c = 5;
            puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
            puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
            if (puVar6 != &local_e0) {
              local_108 = (longlong *)*puVar6;
              uStack_100 = *(undefined4 *)(puVar6 + 1);
              uStack_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_e0);
              }
              FUN_140041b80(&local_e0,&local_108);
            }
            local_a0 = &local_e0;
            local_108 = (longlong *)CONCAT44(uRam0000000141dc7474,_DAT_141dc7470);
            uStack_100 = uRam0000000141dc7478;
            uStack_fc = uRam0000000141dc747c;
            if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_d0);
            }
            FUN_140041b80(local_d0,&local_108);
            local_98 = local_d0;
            local_108 = (longlong *)CONCAT44(uRam00000001419ecd44,_DAT_1419ecd40);
            uStack_100 = uRam00000001419ecd48;
            uStack_fc = uRam00000001419ecd4c;
            if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_c0);
            }
            FUN_140041b80(local_c0,&local_108);
            local_90 = local_c0;
            FUN_140e609c0(param_1);
            ppuVar11 = &local_a0;
            puVar6 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_118,3,ppuVar11);
            if (puVar6 != puVar7) {
              local_108 = (longlong *)*puVar6;
              uStack_100 = *(undefined4 *)(puVar6 + 1);
              uStack_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              FUN_140041b80(puVar7,&local_108);
            }
            FUN_140e60910(1);
            local_e8 = 0x675;
            pplVar8 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efc08);
            uStack_fc = 6;
            local_108 = param_1;
            FUN_140e87440(&local_108,DAT_141a101f8,0x80000000,&local_58,
                          (ulonglong)ppuVar11 & 0xffffffffffffff00,uVar12 & 0xffffffffffffff00);
            if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_108);
            }
            FUN_140e609c0(param_1);
            if (&local_58 != pplVar8) {
              local_108 = local_58;
              uStack_100 = uStack_50;
              uStack_fc = uStack_4c;
              if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pplVar8);
              }
              FUN_140041b80(pplVar8,&local_108);
            }
            FUN_140e60910(1);
            local_e8 = 0x677;
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            local_118 = 0;
            local_110 = 0;
            local_10c = 5;
            uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8828);
            FUN_140e63610(param_1,param_2,&local_118,0,uVar5,0);
            local_e8 = 0x679;
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            local_118 = 0;
            local_110 = 0;
            local_10c = 5;
            uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
            FUN_140e63610(param_1,param_2,&local_118,0,uVar5,0);
            local_e8 = 0x67a;
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            local_118 = 0;
            local_110 = 0;
            local_10c = 5;
            uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
            FUN_140e63610(param_1,param_2,&local_118,0,uVar5,0);
          }
        }
        else {
          local_e8 = 0x662;
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8598);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
          *puVar6 = 0;
          local_e8 = 0x663;
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          local_118 = 0;
          local_110 = 0;
          local_10c = 5;
          uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
          FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_88,uVar4 & 0xffffffffffffff00,
                        uVar12 & 0xffffffffffffff00);
          local_108 = (longlong *)CONCAT44(uRam0000000141dda6ac,_DAT_141dda6a8);
          uStack_100 = uRam0000000141dda6b0;
          uStack_fc = DAT_141dda6b4;
          if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e0);
          }
          FUN_140041b80(&local_e0,&local_108);
          local_a0 = &local_e0;
          uVar5 = FUN_140069500(uVar5);
          FUN_140e63610(uVar5,param_2,&local_118,1,&local_88,&local_a0);
          local_e8 = 0x664;
        }
      }
    }
    else {
      local_e8 = 0x652;
      if ((uVar3 & 0x46) != 0) {
        FUN_140041a50(&local_118);
      }
      local_118 = 0;
      local_110 = 0;
      local_10c = 5;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
      FUN_140e87440(uVar5,DAT_1419f7b28,0x80000000,&local_68,uVar4 & 0xffffffffffffff00,
                    uVar12 & 0xffffffffffffff00);
      local_108 = (longlong *)CONCAT44(DAT_141dda548._4_4_,(undefined4)DAT_141dda548);
      uStack_100 = DAT_141dda550;
      uStack_fc = DAT_141dda554;
      if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140041b80(&local_e0,&local_108);
      local_a0 = &local_e0;
      uVar5 = FUN_140069500(uVar5);
      ppuVar11 = &local_a0;
      puVar6 = &local_68;
      FUN_140e63610(uVar5,param_2,&local_118,1,puVar6,ppuVar11);
      local_e8 = 0x653;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_118 = 0;
      local_110 = 0;
      local_10c = 5;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_88,(ulonglong)puVar6 & 0xffffffffffffff00,
                    (ulonglong)ppuVar11 & 0xffffffffffffff00);
      local_108 = (longlong *)CONCAT44(DAT_141dda548._4_4_,(undefined4)DAT_141dda548);
      uStack_100 = DAT_141dda550;
      uStack_fc = DAT_141dda554;
      if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140041b80(&local_e0,&local_108);
      local_a0 = &local_e0;
      uVar5 = FUN_140069500(uVar5);
      FUN_140e63610(uVar5,param_2,&local_118,1,&local_88,&local_a0);
      local_e8 = 0x654;
    }
  }
  else {
    local_e8 = 0x64e;
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << (bVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_e0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

