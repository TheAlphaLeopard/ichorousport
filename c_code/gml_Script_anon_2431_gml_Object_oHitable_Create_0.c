// gml_Script_anon_2431_gml_Object_oHitable_Create_0 @ 0x140b0a260

undefined8 *
gml_Script_anon_2431_gml_Object_oHitable_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *local_res18;
  undefined4 uVar8;
  ulonglong uVar7;
  undefined8 **ppuVar9;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58 [2];
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_90 = "gml_Script_anon@2233@gml_Object_oHitable_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x7b;
  FUN_140041df0(local_58,param_4,1,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_a8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_74 = 0xffffff;
  local_80 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x7b;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_50;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_88 = 0x7b;
    if ((int)local_58[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_50;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 6;
    *puVar4 = param_1;
    uVar3 = FUN_140e5c910();
    FUN_140e42c10(uVar3,param_1);
  }
  local_88 = 0x7c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((int)local_58[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_50;
    if (puVar4 == &local_a8) goto LAB_140b0a419;
  }
  local_68 = *puVar4;
  uStack_60 = puVar4[1];
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_68);
LAB_140b0a419:
  local_res18 = &local_a8;
  ppuVar9 = &local_res18;
  uVar7 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar7,ppuVar9);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_88 = 0x7c;
  }
  else {
    local_88 = 0x7e;
    uStack_60 = CONCAT44(0xd,(undefined4)uStack_60);
    local_68 = 0;
    local_48 = 0;
    uStack_40 = uStack_60;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_48);
    if (0 < (int)local_58[0]) {
      puVar6 = (undefined8 *)*local_50;
    }
    FUN_140e87440(puVar6,DAT_1419ff338,0x80000000,&local_80,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    FUN_140e87930(&local_80,DAT_141a57430,0x80000000,&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,1,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar6 = local_50;
    do {
      puVar4 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

